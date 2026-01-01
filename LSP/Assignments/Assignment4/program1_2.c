////////////////////////////////////////////////////////////////////
 //
 //         Required Header File 
 //
 //
////////////////////////////////////////////////////////////////////
 
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
////////////////////////////////////////////////////////////////////
//
//      Function name: copyFile_Offset
//      Description  : it use to copy file content 1 to another file 
//                     from given byte offset of the source file  
//      input:   
//      author       : Sakshi Kachate
//      Date         :   30/12/25 
//
//
////////////////////////////////////////////////////////////////////


int copyFile_Offset(char* src_file, char* dest_file,off_t offset)
{
    int fd1= -1,fd2= -1;
     
    char Buffer[1024];
    struct stat sobj;

    ssize_t bytesRead ,bytesWritten;

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
        close(fd1);
        return -1;
    }

    fd2 = open(dest_file ,O_WRONLY | O_TRUNC | O_CREAT ,sobj.st_mode);
    if (fd2 < 0)
    {
        printf("unable to open  destination file \n");
        printf("Error : %s \n ", strerror(errno));
        close(fd1);

        return -1 ;
    }

    if(lseek(fd1,offset,SEEK_SET)< 0)
    {
        printf("lseek Failed\n");
        printf("Error : %s \n ", strerror(errno));

        close(fd1);
        close(fd2);
        return -1;
    }

    while((bytesRead  = read(fd1 ,Buffer ,sizeof(Buffer)))>0)
    {
        bytesWritten= write(fd2 ,Buffer ,bytesRead);
        if(bytesWritten < 0)
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





int main(int argc , char*argv[])
{ 
    int iRet = 0;
    char * endptr;

    if(argc != 4)
    {
        printf("usage %s <source file> <destination file> <offset>\n",argv[0]);
        return -1;
    }
    off_t offset =strtoll(argv[3],&endptr,10);
    if (*endptr != '\0')
    {
        printf("Invalid offset value \n");
        return -1;
    }
    iRet = copyFile_Offset(argv[1],argv[2],offset);

    if(iRet ==-1)
    {
        printf("File Copy Failed \n");
    }
    return 0;
}


/*

  INPUT

  ./myexe Src.txt des.txt 12

  OUTPUT

source file content copied Sucessfully in destination file 
  

& 

require file in this code:
Src.txt     : Marvellous Infosystem
des.txt   :   
 
 
 after run

 des.txt     :  _Infosystem

*/
