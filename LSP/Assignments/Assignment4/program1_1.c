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
////////////////////////////////////////////////////////////////////
//
//      Function name: copyFile
//      Description  : it use to copy file content 1 to another file  
//      input:   
//      author       : Sakshi Kachate
//      Date         :   30/12/25 
//
//
////////////////////////////////////////////////////////////////////


int copyFile(char* src_file, char* dest_file)
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

    if(argc != 3)
    {
        printf("usage %s <source file> <destination file>\n",argv[0]);
        return -1;
    }

    iRet = copyFile(argv[1],argv[2]);

    if(iRet ==-1)
    {
        printf("File Copy Failed \n");
    }
    return 0;
}


/*

     




  INPUT
./myexe CL_cpy.txt CL_Mcpy.txt 
 

  OUTPUT on cmd

source file content copied Sucessfully in destination file 


require file in this code:
CL_cpy.txt     : Marvellous
CL_Mcpy.txt    :   
 
 
 after run

 CL_Mcpy.txt     :  Marvellous

*/
