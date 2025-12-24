
  //accept file name and mode(R/W/RW/A) from user
  //use access() to check permission for current process
  //print accessible or not eith reason
#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>


int main()
{   
    char FileName[100];
    int mode;

    printf("Enter File name :");
    scanf("%s",FileName);

    printf("Enter File mode (0-Exist, 4-read, 2-write, 1-Execute) :");
    scanf("%d",&mode);

    if(access(FileName,mode)== 0)
    {
        printf("File is Accessible\n");
    }
    else
    {
         
          printf("File is NOT accessible.\n");
        printf("Reason: %s\n", strerror(errno));
    }



    return 0;
}
