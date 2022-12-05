// Write a program to compute the sum of all elements in an array using pointers

#include<stdio.h>
int getSum(int *,int);
int main()
{
    int arr[5] = {5,4,3,2,1};

    printf("Sum of all elements in series =%d",getSum(arr,5));
    
    return 0;
}
int getSum(int *arr_ptr,int size)
{
    int sum=0;
    for(int i = 0 ; i < size;i++)
    {
        sum += *(arr_ptr + i);
    }
    return sum;
}