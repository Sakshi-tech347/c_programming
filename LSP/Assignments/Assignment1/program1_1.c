// Open File
//Accept file name from user and open it using open()
//print Success msg + file Desciptor
//handle error using perror() 


#include<stdio.h>
#include<fcntl.h>
#include <errno.h>
#include<string.h>


int main()
{    int fd = 0;
    char FileName [100];
    printf("Enter the file name :\n");
    scanf("%99s",FileName);

   
    fd =open(FileName,O_RDWR);

    if (fd == -1)
    { 
        printf("value of errorno is :%d\n",errno);
        printf("Error statment :%s\n",strerror(errno));
        return -1;
    }
    else
    {
        printf("file is Succesfully open with fd %d",fd);
    }

   
    return 0;
}
