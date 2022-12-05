// Taking input and display array using pointers.
#include<stdio.h>
void takeInput(int * , int);
void displayArray(int * , int);
int main()
{
    int arr[5];
    takeInput(arr,5);
    displayArray(arr,5);
    return 0;
}
void takeInput(int *add_arr , int size)
{
    for(int i = 0  ; i<size ; i++)
    {
        scanf("%d",add_arr+i);
    }
}
void displayArray(int *arr_add,int size)
{
    for(int i =  0 ; i < size ; i++)
    {
        printf("%d ",* (arr_add + i) );
    }
}