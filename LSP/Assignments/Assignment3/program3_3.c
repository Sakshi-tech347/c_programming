/*
         move  All Files Dir to Dir 
         Accept Souce Dir And Dest Dir
            move all regular file
             .Use rename ()if same file sysytem
             else copy + Delete
             print count  of moved files 
*/

#include<stdio.h>
#include<errno.h>
#include<sys/stat.h>
#include<string.h>
#include<dirent.h>
#include<fcntl.h>
#include<unistd.h>

int moveDir(char* Srcdir, char* Destdir)
{

    DIR* dp = NULL;
    int iRet = 0;
    struct stat sobj ;
    struct  dirent *dobj = NULL;
     
    
    int count = 0;


    dp = opendir(Srcdir);
    if (dp == NULL)
    {
        printf("Cannot open Source Directory : %s\n", strerror(errno));
        return -1;
    }

    while((dobj = readdir(dp)) != NULL)
    {
        char srcpath[1024];
        char destpath[1024];

        int fd1 =0, fd2 =0 , iRet1 =0;
        char Buffer[1024];


        sprintf(srcpath, "%s/%s", Srcdir, dobj->d_name);      // combine absolute srcpath & file Name
        sprintf(destpath, "%s/%s", Destdir, dobj->d_name);    // combine absolute destpath & file Name

        if ((stat(srcpath, &sobj))< 0 )
            { printf("Unable to get stat info for %s\n", srcpath);
            continue;}

             if(S_ISREG(sobj.st_mode))
        {
            if(rename(srcpath, destpath) == 0)
            {
                count++;
            }
            else if(errno == EXDEV) // for different filesystem
            {
                fd1 = open(srcpath, O_RDONLY);
                fd2 = open(destpath, O_WRONLY | O_CREAT | O_TRUNC, sobj.st_mode);
                if(fd1 == -1 || fd2 == -1)
                {
                    printf("Error opening files\n");
                    if(fd1 != -1) 
                    {
                        close(fd1);
                    }
                    if(fd2 != -1) 
                    {
                        close(fd2);
                    }
                    continue;
                }

                while((iRet1 = read(fd1, Buffer, sizeof(Buffer))) > 0)
                {
                    write(fd2, Buffer, iRet1);
                }
                close(fd1);
                close(fd2);
                unlink(srcpath);  // delete original file
                count++;
            }
            else
            {
                printf("Unable to move %s : %s\n", srcpath, strerror(errno));
            }
        }
    }

    closedir(dp);

    printf("Total files moved: %d\n", count);
    return count;
             
    
}





int main()
{
    char Srcdir[100];
    char Destdir[100];

    
    int iRet = 0;

    printf("Enter the source  Directory name  \n");
    scanf("%s",Srcdir);

    printf("Enter the destination Directory name \n");
    scanf("%s",Destdir);

    iRet = moveDir(Srcdir,Destdir);

     

    return 0;
}