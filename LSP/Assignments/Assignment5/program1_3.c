
/*
file counter + size report 
create  dir_report.c that recursively calculates:

total number of file 
total number of diretory
total size of refular file in bytes
largest file name + size 
count a directory when u enter it 
for size consider  only regular file (S_ISREG);
ignore symlink target size (treat symlink as link object only )
*/




/////////////////////////////////////////////////////////////////////////////////////////
//
//
//      Requre Header file..
//
/////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<sys/stat.h>

typedef struct {
    long total_files;
    long total_dirs;
    long long total_size_bytes;
    char largest_file_name[256]; 
    long long largest_file_size;
} DirStats;


////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
//
//          Function : dir_Report
//          Desciption :    is use to display the count of (dir , file ), totatal size etcc
//          Input      :    const *char path
//                          DirStats *stats
//          Output     :    
//          Date       :    2/1/26 
//          Author     :    Sakshi kachate 
//
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void dir_report(const char *path, DirStats *stats) 
{
    struct dirent *entry;
    struct stat sobj;
    DIR *dir = opendir(path);

    if (!dir) return;

    stats->total_dirs++; 

    while ((entry = readdir(dir)) != NULL) 
    {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;

        char full_path[1024];
        snprintf(full_path, sizeof(full_path), "%s/%s", path, entry->d_name);

        if (lstat(full_path, &sobj) == -1) continue;

        if (S_ISDIR(sobj.st_mode)) 
        {
            if (!S_ISLNK(sobj.st_mode)) 
            {
                dir_report(full_path, stats);
            }
        } 
        else if (S_ISREG(sobj.st_mode)) 
        {
            stats->total_files++;
            stats->total_size_bytes += sobj.st_size;

            if (sobj.st_size > stats->largest_file_size) 
            {
                stats->largest_file_size = sobj.st_size;
                strncpy(stats->largest_file_name, entry->d_name, sizeof(stats->largest_file_name) - 1);
            }
        }
    }
    closedir(dir);
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
    const char *root = (argc > 1) ? argv[1] : ".";
    
    DirStats stats = {0, 0, 0, "None", 0};

    dir_report(root, &stats);

    printf("Dirs:                   %ld\n", stats.total_dirs);
    printf("Files:                  %ld\n", stats.total_files);
    printf("Total Size :            %lld bytes\n", stats.total_size_bytes);
    printf("Largest File:           %s (%lld bytes)\n", 
            stats.largest_file_name, stats.largest_file_size);

    return 0;
}


/*

OUTPUT

./
Dirs:                   2
Files:                  5
Total Size :            25080 bytes
Largest File:           myexe (16344 bytes)




*/



 
