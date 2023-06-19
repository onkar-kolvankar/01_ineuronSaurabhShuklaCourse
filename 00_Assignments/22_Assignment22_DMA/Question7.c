// Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr = (int *)malloc(size(int));

    // now after this ptr will be destroyed but that memory location will be still reserved
    // and not available for anyone. This is memory leak.

    // so use free() to free the memory
    free(ptr);

    return 0;
}