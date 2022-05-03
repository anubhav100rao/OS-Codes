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
    int fd = open("hello.txt", O_WRONLY);
    if(fd == -1) { // issue in opening the file
        printf("Problem in opening the file\n");
        return -1;
    }
    
    /**
        size_t write (int fd, void* buf, size_t cnt); 
        return Number of bytes written on success
        return 0 on reaching end of file
        return -1 on error
        return -1 on signal interrupt

    */
    int sz = write(fd, "Random Write statement\n", strlen("Random Write statement\n"));

    printf("status of write descriptor %d\n", sz);
    
    close(fd);
    // 0 on success.
    // -1 on error.
    return 0;
}