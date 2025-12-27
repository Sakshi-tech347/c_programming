/*
         Delete All empty Regular File 
         Accept Directory Name 
             Delete File With Size= 0 bytes (Regular file only )
             print name deleted + total deleted count 
*/


#include<stdio.h>
#include<errno.h>
#include<sys/stat.h>
#include<string.h>
#include<dirent.h>
#include<fcntl.h>
#include<unistd.h>

int DltFile(char* dirName)
{

    DIR* dp = NULL;
    int iRet = 0;
    struct stat sobj ;
    struct  dirent *dobj = NULL;
     
    
    int count = 0;


    dp = opendir(dirName);
    if (dp == NULL)
    {
        printf("Cannot open Source Directory : %s\n", strerror(errno));
        return -1;
    }

    while((dobj = readdir(dp)) != NULL)
    {
        char path[1024];

        int fd1 =0, fd2 =0 , iRet1 =0;
        char Buffer[1024];


        sprintf(path, "%s/%s", dirName, dobj->d_name);      

        if ((stat(path, &sobj))< 0 )
            { printf("Unable to get stat info for %s\n", path);
            continue;}

             if(S_ISREG(sobj.st_mode)&&sobj.st_size == 0)
        {
            if(unlink(path) == 0)
            {
                 printf("Deleted %s\n",path);
                 count++;
            }
            else  
            {
                 printf("Unable to delete %s : %s \n",path ,strerror(errno));
                     
            }  
        }
    }

    closedir(dp);

    printf("Total 0 size  file deleted : %d\n", count);
    return count;
             
    
}

int main()
{
    char dirName[100];
    int iRet = 0;

    printf("Enter the source  Directory name  \n");
    scanf("%s",dirName);

    iRet = DltFile(dirName);


    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
// 
// Enter the source  Directory name  
// Delete
// 
// Total 0 size  file deleted : 0
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
