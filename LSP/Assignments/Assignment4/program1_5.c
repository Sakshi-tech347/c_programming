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
//      Function name:  
//      Description  :  i t use to reverse text
//      input:   
//      author       : Sakshi Kachate
//      Date         :   1/1/26 
//
//
////////////////////////////////////////////////////////////////////


 int main(int argc,char *argv[])
 {
    int fd ;
    char ch;
    off_t offset;
    int i =0 ;

    if(argc != 2)
    {
        printf("use : %s <filename>\n",argv[0]);
        return -1;
    }

    fd = open(argv[1],O_RDONLY);

    if(fd< 0)
    {
         printf("unable to open  output file \n");
        printf("Error : %s \n ", strerror(errno));
        return -1;
    }

    offset = lseek(fd , 0 , SEEK_END);

    while(offset > 0)
    {
        lseek(fd, --offset ,SEEK_SET);

        if(read(fd, &ch, 1)> 0)
        {
            write(1,&ch,1);
        }
    }
    printf("\n");
    close(fd);
    return 0;
}

   


/*

  INPUT

 ./myexe Reverse.txt 
 

  OUTPUT on cmd

metsysofnI suollevraM


require file in this code:
Reverse.txt      :
 
 
 after run

 Reverse.txt     :  Marvellous Infosystem  //it remain same
*/

 
