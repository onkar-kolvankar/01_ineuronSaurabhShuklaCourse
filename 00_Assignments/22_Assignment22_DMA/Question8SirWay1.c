// Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr = (int *)malloc(sizeof(int));

    *ptr = 10;
    printf("\nBefore free() is runned *ptr = %d",*ptr);

    free(ptr);

    printf("\nAfter free() is run *ptr = %d",*ptr);

    return 0;
}