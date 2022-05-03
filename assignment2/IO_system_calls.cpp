#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int fd = open("hello.txt", O_RDONLY);
    if(fd == -1) { // issue in opening the file
        printf("Problem in opening the file\n");
        return -1;
    }
    
    /**
        size_t read (int fd, void* buf, size_t cnt); 
        return Number of bytes read on success
        return 0 on reaching end of file
        return -1 on error
        return -1 on signal interrupt
    */
    char *c = (char*) calloc(4000, sizeof(char));
    int size_bytes = read(fd, c, 4000);
    // printf("size_readed %d\n", size_bytes);

    printf("%s\n", c);
    
    close(fd);
    // 0 on success.
    // -1 on error.
    return 0;
}