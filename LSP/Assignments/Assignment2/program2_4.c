/*List all file from directory
     print each entry with its type : Regular/Directory Link/Fifo/
     socket/Char/Block
     use lstat() for accurate type
     */

 
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>

int DirList(char *DirName)
{
    DIR *dp = NULL;
    struct stat stobj;
    struct dirent *dobj = NULL;

    dp = opendir(DirName);

    if (dp == NULL)
    {
        printf("Error : %s\n", strerror(errno));
        return -1;
    }
    else
    {
        printf("Directory opened succesfully!\n");
    }

    printf("Files in %s Directory : \n", DirName);
    
    while((dobj = readdir(dp)) != NULL)
    {
        char path[1024];

        sprintf(path, "%s/%s", DirName, dobj->d_name);      //to combine absolute path & file Name

        lstat(path, &stobj);

        printf("%s \t", dobj->d_name);

        if(S_ISBLK(stobj.st_mode))
        {
            printf("Block Device\n");
        }
        else if(S_ISCHR(stobj.st_mode))
        {
            printf("Character Device\n");
        }
        else if(S_ISREG(stobj.st_mode))
        {
            printf("Regular\n");
        }
        else if(S_ISDIR(stobj.st_mode))
        {
            printf("Directory\n");
        }
        else if(S_ISFIFO(stobj.st_mode))
        {
            printf("PIPE\n");
        }
        else if(S_ISSOCK(stobj.st_mode))
        {
            printf("Socket \n");
        }
        else if(S_ISLNK(stobj.st_mode))
        {
            printf("Symbolic\n");
        }
        else
        {
            printf("Unkown \n");
        }
    }
    
    closedir(dp);
    return 0;
}

int main()
{
    char DirName[100];
    int iRet = 0;
    
    printf("Enter Directory Name (Absolute path): \n");
    scanf("%s", DirName);

    iRet = DirList(DirName);

    if (iRet == -1)
    {
        printf("Unable to list directory contents.\n");
    }

    return 0;
}