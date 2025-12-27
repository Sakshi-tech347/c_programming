/* Find Largest File in Directory
     Accept directory name
     Find and Print 
        Largest File Name 
        its size in Bytes
     Consider Only  Regular File(ignore Directory Files)    
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
    long int iMax = 0;
    char MaxFile[200] = {'\0'};

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

    while((dobj = readdir(dp)) != NULL)
    {
        char path[1024];

        sprintf(path, "%s/%s", DirName, dobj->d_name);      //to combine absolute path & file Name

        lstat(path, &stobj);

        if(S_ISREG(stobj.st_mode))
        {
            if(stobj.st_size > iMax)
            {
                iMax = stobj.st_size;
                strcpy(MaxFile,dobj->d_name);
            }
        }
    }
    
    if(iMax > 0)
    {
        printf("Largest file : %s \t", MaxFile);
        printf("Size : %ld bytes\n", iMax);
    }
    else
    {
        printf("No Regular file found in the directory");
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
