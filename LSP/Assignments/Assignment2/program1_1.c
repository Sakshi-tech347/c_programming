/*Read whole file
    Accept file name print full content on console
    use a buffer loop(read()until 0)
    show total bytes read

*/

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>

#define size_Buffer 500
int main()
{
    int fd = 0;
    char FileName[100];
    char Buffer[size_Buffer];
    int iRet =0;
    int bytes = 0;

    memset (Buffer ,'\0', size_Buffer);
    printf("Enter file name: ");
    scanf("%s",FileName);

    fd =open(FileName ,O_RDONLY);
    if(fd<0)
    {
        printf("Unable to open file \n");
        return -1;
    }
    else
    {
        printf("File is succesfully open with %d\n",fd);
    }

    while(iRet =read(fd,Buffer,(size_Buffer>0))>0)
    {
        printf( Buffer,iRet);
        bytes = bytes +iRet;
    }
        printf("\n");
    
    printf("number of totale byes read %d \n", bytes);

    close(fd);

    return 0 ;
}
