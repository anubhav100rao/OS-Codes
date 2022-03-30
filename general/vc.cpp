#include <stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(int argc, char **argv) {
    
    if(argc <= 1) {
        printf("no command line arguments found...\n");
        return 0;
    }

    
    int val = atoi(argv[1]);
    int *num = (int*)malloc(1*sizeof(int));
    *num = val;
    printf("%p address\n", num);
    while(1) {
        printf("(%u) value of p: %d\n", num, *num);
        Sleep(1000);
        (*num)++;
    }
 
    return 0;
}