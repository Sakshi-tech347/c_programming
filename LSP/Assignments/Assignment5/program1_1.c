

/////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Requre Header file..
//
/////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

#define MAX_PATH_LEN 1024


////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
//
//          Function :      mode_to_perms
//          Desciption :    its use to print statistic data
//          Input      :    const *char path
//                          mode_t mode
//          Output     :    
//          Date       :    2/1/26 
//          Author     :    Sakshi kachate 
//
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void mode_to_perms(mode_t mode, char *str) {
    if (S_ISREG(mode)) str[0] = '-';
    else if (S_ISDIR(mode)) str[0] = 'd';
    else if (S_ISCHR(mode)) str[0] = 'c';
    else if (S_ISBLK(mode)) str[0] = 'b';
    else if (S_ISLNK(mode)) str[0] = 'l';
    else if (S_ISFIFO(mode)) str[0] = 'p';
    else if (S_ISSOCK(mode)) str[0] = 's';
    else str[0] = '?';

    str[1] = (mode & S_IRUSR) ? 'r' : '-';
    str[2] = (mode & S_IWUSR) ? 'w' : '-';
    str[3] = (mode & S_IXUSR) ? 'x' : '-';
    str[4] = (mode & S_IRGRP) ? 'r' : '-';
    str[5] = (mode & S_IWGRP) ? 'w' : '-';
    str[6] = (mode & S_IXGRP) ? 'x' : '-';
    str[7] = (mode & S_IROTH) ? 'r' : '-';
    str[8] = (mode & S_IWOTH) ? 'w' : '-';
    str[9] = (mode & S_IXOTH) ? 'x' : '-';
}

const char* get_file_type(mode_t mode) {
    if (S_ISREG(mode)) return "Regular File";
    if (S_ISDIR(mode)) return "Directory";
    if (S_ISCHR(mode)) return "Character Device";
    if (S_ISBLK(mode)) return "Block Device";
    if (S_ISLNK(mode)) return "Symbolic Link";
    if (S_ISFIFO(mode)) return "FIFO/Pipe";
    if (S_ISSOCK(mode)) return "Socket";
    return "Unknown";
}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//
//
//          EntryPoint Function
//
//
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <directory_path>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    const char *dir_path = argv[1];
    DIR *dir_ptr;
    struct dirent *dir_entry;
    struct stat file_stat;
    char full_path[MAX_PATH_LEN];
    char permissions[11];

    dir_ptr = opendir(dir_path);
    if (dir_ptr == NULL) {
        perror("opendir error");
        exit(EXIT_FAILURE);
    }

    printf("%-20s | %-16s | %-8s | %s\n", "Name", "Type", "Size", "Permissions");

    while ((dir_entry = readdir(dir_ptr)) != NULL) {
        snprintf(full_path, MAX_PATH_LEN, "%s/%s", dir_path, dir_entry->d_name);

        if (lstat(full_path, &file_stat) == -1) {
            perror("lstat error");
            continue;  
        }

         
        mode_to_perms(file_stat.st_mode, permissions);

         
        printf("%-20s | %-16s | %-8ld | %s\n",
               dir_entry->d_name,
               get_file_type(file_stat.st_mode),
               (long)file_stat.st_size,
               permissions);
    }

    closedir(dir_ptr); 
    return EXIT_SUCCESS;
}



/*

OUTPUT

./


Name                 | Type             | Size     | Permissions
.                    | Directory        | 4096     | drwxrwxr-x
Ganesh.txt           | Regular File     | 0        | -rw-rw-r--
..                   | Directory        | 4096     | drwxrwxr-x



*/



 
