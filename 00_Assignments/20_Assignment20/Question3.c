// Write a function to sort an array of int type values .

#include<stdio.h>
void swap(int * ,int *);
void sort(int *,int);
int main()
{

    int arr[5] = {9,7,4,6,2};
    sort(arr,5);
    for(int i = 0 ; i < 5 ; i++)
        printf("%d ",arr[i]);


    return 0;
}
void sort(int *ptr,int size)
{
    int isSwapped = 1;  //default so loop runs for 1st time.
    
    for(int j = 0 ; 1 ; j++)
    {
        isSwapped = 0;
        for(int i = 0 ; i < size-1 ; i++)
        {
            if(*(ptr+i) > *(ptr+i+1) )
            {
                // swap variables
                swap(ptr+i,ptr+i+1);

                // set isSwapped = 1
                isSwapped = 1;
            }
        }
        if(!isSwapped)
            break;

    }
}
void swap(int *p1 ,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}