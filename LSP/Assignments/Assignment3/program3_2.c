/*
        check File present in Directory 
            check whether that file exist in that directory     
            print absolute matched path  if found 


*/

#include<stdio.h>
#include<errno.h>
#include<sys/stat.h>
#include<string.h>
#include<dirent.h>
#include<stdlib.h>

int chckFilePresent(char* dirName, char* FileName)
{

    DIR* dp = NULL;
    struct dirent  *dobj;
    char path[PATH_MAX];
    char absPath[PATH_MAX];

    dp = opendir(dirName);
    if (dp == NULL)
    {
        perror("Unable to open directory");
        return -1;
    }

    while((dobj= readdir(dp)) != NULL)
    {
        char path[1024];
        snprintf(path, sizeof(path),"%s,%s" ,dirName, dobj->d_name);

        if (strcmp(dobj->d_name,FileName)== 0)
        {
            if (realpath(path, absPath) != NULL)
            {
                printf("File found at absolute path:\n%s\n", absPath);
            }
            else
            {
                printf("File found at path:\n%s\n", path);
            }
             closedir(dp);
             return 1;
        }

       
        

    }
     closedir(dp);
    return 0;
}





int main()
{
    char dirName[100];
    char FileName[100];

    
    int iRet = 0;

    printf("Enter the Directory name  \n");
    scanf("%s",dirName);

    printf("Enter the file name \n");
    scanf("%s",FileName);

    iRet = chckFilePresent(dirName,FileName);

    if(iRet == -1 )
    {
        printf("unable to open Directory \n");
    }
    else if( iRet == 0)
    {
        printf("File not found \n");
    }


    return 0;
}