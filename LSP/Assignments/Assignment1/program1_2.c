//open file in given mode
    //accept file name and mode(R/W/RW/A) from user
    //convert mode to flags(_RDONLY | O_WRONLY etc)
    //open file accordingly and display fd

#include<stdio.h>
#include<fcntl.h>
#include <errno.h>
#include<string.h>


int main()
{   int fd = 0;
    char cFileName [100];
    char cMode[100];
    int flag = 0;
    printf("Enter the file name :\n");
    scanf("%99s",cFileName);

    printf("Enter the file mode  R/W/RW/A :\n");
    scanf("%99s",cMode);

    if(strcmp(cMode ,"R") == 0)
    {
        flag == O_RDONLY;
    }
    else  if(strcmp(cMode ,"W") == 0)
    {
        flag == O_WRONLY;
    }
    else  if(strcmp(cMode ,"RW") == 0)
    {
        flag == O_RDWR;
    }
    else  if(strcmp(cMode ,"A") == 0)
    {
        flag == O_APPEND;
    }
    else
    {
        printf("Entered Invalid mode \n");
        return 1;
    }

   
    fd =open(cFileName,flag ,0777);

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
