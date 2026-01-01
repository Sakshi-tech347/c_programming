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
//      Function name: copyFile_pRDWR
//      Description  :  copy file using pread/pwrite without changing the  
//                      file offset 
//      input:   
//      author       : Sakshi Kachate
//      Date         :   30/12/25 
//
//
////////////////////////////////////////////////////////////////////


int copyFile_pRDWR(char* src_file, char* dest_file,off_t offset)
{
    int fd1= -1,fd2= -1;
     
    char Buffer[1024];
    struct stat sobj;

    ssize_t bytesRead  ;
    off_t readoffset = offset;
    off_t writeoffset = 0;

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

    

    while((bytesRead  = pread(fd1 ,Buffer ,sizeof(Buffer), readoffset))>0)
    {
         
        if(pwrite(fd2 ,Buffer ,bytesRead,writeoffset) < 0 )
        {
            printf(" write error \n");
            close(fd1);
            close(fd2);
            return -1;

        }

        readoffset = readoffset + bytesRead;
        writeoffset = writeoffset + bytesRead;
    }

    if(bytesRead < 0 )
    {
         printf("pread error \n");
        printf("Error : %s \n ", strerror(errno));
    }

    close(fd1);
    close(fd2);


    printf(" file copied using pread /pwrite   from offset  %ld  \n",offset);

    

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
    off_t offset =strtoll(argv[3],NULL,10);
    if (offset < 0 )
    {
        printf("Invalid offset value \n");
        return -1;
    } 
    return copyFile_pRDWR(argv[1], argv[2],offset);
}


/*

  INPUT

  ./myexe Src.txt des.txt 10

  OUTPUT

file copied using pread /pwrite   from offset  10 

filel Src.txt &des.txt

Src : sakshi laxman kachate
des : man kachate

*/

 
