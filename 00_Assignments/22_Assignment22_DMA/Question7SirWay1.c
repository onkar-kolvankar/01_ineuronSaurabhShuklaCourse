// Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr = (int *)malloc(sizeof(int));

    // here the 4bytes memory whosed address is stored in the ptr is the reserved.
    // Now when you make ptr = NULL then you have lost the address of that memory block.
    // So now that block is STILL reserved but you don't haves its address so,
    // YOU CANT USE THAT MEMORY block
    // This is called MEMORY LEAK.
    ptr = NULL;

    return 0;
}