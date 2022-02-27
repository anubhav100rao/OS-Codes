#include <stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(int argc, char** argv) { // vector<string>
    
    if(argc < 2) {
        printf("please enter some command line argument\n");
        return 0;
    }
    while(1) {
        printf("%s\n", argv[1]);
        Sleep(1000);
    }
 
    return 0;
}