#include<stdio.h>

int arr[10];

void fun() {
    return;
}

int main() {
    int m = 10;
    return 0;
}

/**
 * process properties
 * stack
 * heap
 * data (initialised data or global data)
 * uninitialised data(bss)
 * text
*/

/**
 * memory exhaustion
 * The stack area traditionally adjoined the heap area 
 * and grew in the opposite direction; when the stack pointer
 *  met the heap pointer, free memory was exhausted.
*/

/**
 * $ gcc process_memory_layout.cpp -o memory-layout
 * 
 * $ size memory-layout.exe
   text    data     bss     dec     hex filename
   16720    1572     116   18408    47e8 memory-layout.exe

    when we are using int arr[10];
       text    data     bss     dec     hex filename
       16720    1572     180   18472    4828 memory-layout.exe


*/