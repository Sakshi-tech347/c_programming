
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


////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
//
//          Function : Tree 
//          Desciption :    travese Directory and print its structure
//          Input      :    const *char path
//                          int level
//          Output     :    
//          Date       :    2/1/26 
//          Author     :    Sakshi kachate 
//
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

void Tree(const char *path , int level)
{
    struct dirent *entry;
    struct stat sobj;
    DIR *dir = opendir(path);

    if(!dir) return;

    while ((entry = readdir(dir)) != NULL)
    {
        if(strcmp(entry->d_name ,".") == 0 ||strcmp(entry->d_name,"..") == 0)
        continue;
    
        char full_path[1024];
        snprintf(full_path,sizeof(full_path),"%s/%s",path,entry->d_name);

        if(lstat(full_path,&sobj) ==  -1)
        continue;

        int i = 0;

        for(i=0; i< level; i++)
        printf("    ");

        char *type = "[?]";
        if(S_ISDIR(sobj.st_mode)) type = "[D]";
         else if (S_ISLNK(sobj.st_mode)) type = "[L]";
        else if (S_ISREG(sobj.st_mode)) type = "[F]";

        printf(" |__ %s %s\n",type,entry->d_name);

        if(S_ISDIR(sobj.st_mode) && !S_ISLNK(sobj.st_mode))
        {
            Tree(full_path,level+1);
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


int main(int argc ,char *argv[])
{
    const char *root = (argc > 1) ?argv[1]  :".";
    printf("%s/\n",root);
    Tree(root,1);

    return 0;
}

/*

OUTPUT

./
     |__ [F] program1_1.c
     |__ [F] program1_2.c
     |__ [F] myexe
     |__ [D] open
         |__ [F] Ganesh.txt







*/
