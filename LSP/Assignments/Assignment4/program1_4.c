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
//      Description  : merged multiple file into 1 file
//                     
//      input:       
//      author       : Sakshi Kachate
//      Date         :   1/1/26 
//
//
////////////////////////////////////////////////////////////////////


 int main(int argc,char *argv[])
 {
    int fd_op , fd_in;
    char Buffer[BUFSIZ];
    ssize_t bytesread , byteswrite;
    int i =0 ;

    if(argc < 3)
    {
        printf("use : %s <output file > <input_file> [input_file2....]\n",argv[0]);
        return -1;
    }

    fd_op = open(argv[1],O_WRONLY | O_CREAT | O_TRUNC , 0644);

    if(fd_op < 0)
    {
         printf("unable to open  output file \n");
        printf("Error : %s \n ", strerror(errno));
        close(fd_op);
    }

    for(i = 2 ; i< argc ; i++)
    {
        fd_in = open(argv[i] , O_RDONLY);

        if (fd_in < 0 )
        {
             printf("unable to open  input file \n");
        printf("Error : %s \n ", strerror(errno));
        continue;
        
        }
    

    while ( (bytesread = read(fd_in, Buffer, BUFSIZ))> 0)
    {
       byteswrite = write(fd_op, Buffer, bytesread);
            if (byteswrite != bytesread)
            {
                perror("write");
                close(fd_in);
                close(fd_op);
                return -1;
            }

    }

       
             close(fd_in);
    printf("merged %s \n",argv[i]);

    }
         close(fd_op);

    printf("Files merged successfully.\n",argv[1]);

    return 0;
}

   


/*

  INPUT

 ./myexe merged.txt f1_merge.txt f2_merge.txt f3_merge.txt 
 

  OUTPUT on cmd

merged f1_merge.txt 
merged f2_merge.txt 
merged f3_merge.txt 
Files merged successfully.


require file in this code:
merged.txt      :
f1_merge.txt    :   svpm
f2_merge.txt    :   shivaji vidyalay JC
f3_merge.txt    :   Siddhant clg og mgt
 
 after run

 merged.txt      :  svpmshivaji vidyalay JCSiddhant clg og mgt

*/

  
