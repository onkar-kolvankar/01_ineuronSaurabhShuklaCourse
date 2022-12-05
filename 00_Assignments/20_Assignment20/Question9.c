// Write a program to print the elements of an array in reverse order

#include<stdio.h>
int main()
{
    int arr_size = 5;
    int arr[5] = {56,4,22,5,3};

    int *arr_ptr;
    arr_ptr = arr;

    for(int i = arr_size - 1 ; i >= 0 ; i--)
    {
        printf("%d ",*(arr_ptr + i));
    }
    
    return 0;
}