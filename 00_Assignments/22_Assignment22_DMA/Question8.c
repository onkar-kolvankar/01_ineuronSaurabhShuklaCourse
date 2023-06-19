//  Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
#include<stdlib.h>

int* f1();

int main()
{
    int *ptr;
    ptr = f1();

    *ptr = 20;

    


    free(ptr);




    return 0;
}

int* f1()
{
    int a = 100;

    return &a;
}