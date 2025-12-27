#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<time.h>
#include<string.h>
#include<errno.h>

#define size_BUFFER 500
int main()
{
    int fd = 0;
    char cFileName [100];
    char Buffer[size_BUFFER];
    int iRet = 0;
    int iBytes = 0;

    memset(Buffer,'\0',size_BUFFER);

    printf("Enter the file name :\n");
    scanf("%99s",cFileName);

    printf("Enter the number of bytes you want to read :\n");
    scanf("%d",&iBytes);

    
    fd =open(cFileName,O_RDONLY);

    if (fd <0)
    { 
         printf("Unable to open file.");
        return -1;
    }
    else
    {
        printf("file is Succesfully open with fd %d",fd);
    }

    iRet =read(fd,Buffer,iBytes);

      printf("bytes get succefully read %d\n",iRet);
      printf("Data from file :");
      write(STDOUT_FILENO,Buffer,iRet);
      
       

      close (fd);
     
    
    return 0;
}