#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <dirent.h>
#include<bits/stdc++.h>

using namespace std;


void listFilesRecursively(char *basePath)
{
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);

    // Unable to open directory stream
    if (!dir)
        return;

    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            printf("%s\n", dp->d_name);

            // Construct new path from our base path
            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);

            listFilesRecursively(path);
        }
    }

    closedir(dir);
}

void listFiles(const char *path)
{
    struct dirent *dp;
    DIR *dir = opendir(path);

    // Unable to open directory stream
    if (!dir) 
        return; 

    while ((dp = readdir(dir)) != NULL)
    {
        printf("%s\n", dp->d_name);
    }

    // Close directory stream
    closedir(dir);
}

int main(int argc, char *argv[])
{
    // struct dirent *de;  // Pointer for directory entry
    // DIR *dr = opendir(".");

    // if (dr == NULL) {  // opendir returns NULL if couldn't open directory
    //     printf("Could not open current directory" );
    //     return 0;
    // }
    // while ((de = readdir(dr)) != NULL) {
    //     printf("%s\n", de->d_name);
    // }
  
    // closedir(dr); 
    
    char path[100] = ".";

    // Input path from user
    // printf("Enter path to list files: ");
    // scanf("%s", path);

    listFilesRecursively(path);

    
    return 0;
}