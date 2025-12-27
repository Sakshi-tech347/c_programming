/*
    Copy File contents(source -> Destination)
        Accept Source_file and dest_file
        createDestination if not exist (O_CREAT | O_TRUNC)
        copy using buffered read()/wite()using loop  
        preserve permission (optional bonus using stat() + chmode())


*/

#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>


int copyFile(char* src_file, char* dest_file)
{
    int fd1=0 ,fd2= 0;
    int iRet1 = 0 , iRet2 = 0;
    char Buffer[100];
    struct stat sobj;

    fd1 =open(src_file ,O_RDONLY);
    if (fd1 < 0)
    {
        printf("unable to open source file \n");
        printf("Error: %s\n", strerror(errno));
        return -1;
    }

    if(stat(src_file, &sobj)<0)
    {
        printf("Unable to get stat information ");
        return -1;
    }

    fd2 = open(dest_file ,O_WRONLY | O_TRUNC | O_CREAT ,sobj.st_mode);
    if (fd2 < 0)
    {
        printf("unable to open file \n");
        printf("Error : %s \n ", strerror(errno));
        return -1 ;
    }

    while((iRet1  = read(fd1 ,Buffer ,sizeof(Buffer)))>0)
    {
        iRet2 = write(fd2 ,Buffer ,iRet1);
        if(iRet2 < 0)
        {
            printf("Write error \n");
            close(fd1);
            close(fd2);
            return -1;

        }
    }

    printf("source file content copied Sucessfully in destination file \n ");

    chmod(dest_file,sobj.st_mode);
    close(fd1);
    close(fd2);

    return 0;

}





int main()
{
    char src_file[100];
    char dest_file[100];
    int iRet = 0;

    printf("Enter the source file name \n");
    scanf("%s",src_file);

    printf("Enter the destination file name \n");
    scanf("%s",dest_file);

    iRet = copyFile(src_file,dest_file);

    if(iRet == -1 )
    {
        printf("unable to copy source  file into  Destination File \n");
    }


    return 0;
}
