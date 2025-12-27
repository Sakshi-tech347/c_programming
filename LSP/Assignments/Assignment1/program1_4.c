//Display complete file information
//Acept file name & Display file meta data using stat()
//size,inode,permission,hardlinks,owner uid/gid, last acess modify time 


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<time.h>

int main()
{
    int fd = 0;
    char cFileName [100];

    printf("Enter the file name :\n");
    scanf("%99s",cFileName);

    struct stat sobj;
    int iRet =0;
    iRet = stat(cFileName,&sobj);

    printf("Total size  : %ld \n",sobj.st_size);
    printf("inode number : %ld \n",sobj.st_ino);
    printf("Hardlink count  : %ld \n",sobj.st_nlink);
    printf("Owner uid:    %d\n",sobj.st_uid); 
    printf("Owner Gid:    %d\n",sobj.st_gid);  
    printf("Last access time  : %s", ctime(&sobj.st_atime));
    printf("Last modify time  : %s", ctime(&sobj.st_mtime));
     
     printf("File type is : %d\n",sobj.st_mode);
       printf("Permissions       : ");
    printf (S_ISDIR(sobj.st_mode)? "d" : "-");
    printf( (sobj.st_mode & S_IRUSR) ? "r" : "-");
    printf( (sobj.st_mode & S_IWUSR) ? "w" : "-");
    printf( (sobj.st_mode & S_IXUSR) ? "x" : "-");
    printf( (sobj.st_mode & S_IRGRP) ? "r" : "-");
    printf( (sobj.st_mode & S_IWGRP) ? "w" : "-");
    printf( (sobj.st_mode & S_IXGRP) ? "x" : "-");
    printf( (sobj.st_mode & S_IROTH) ? "r" : "-");
    printf( (sobj.st_mode & S_IWOTH) ? "w" : "-");
    printf( (sobj.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n");

    
    
    return 0;
}