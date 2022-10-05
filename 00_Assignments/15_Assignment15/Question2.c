// Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>

int getSmallestNum(int[], int);
int main()
{
    int arr_size;
    printf("Enter the size of array:");
    scanf("%d", &arr_size);

    int num_arr[arr_size];

    printf("Enter array elements :");
    for (int i = 0; i<arr_size ; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    printf("Smallest number in array is %d", getSmallestNum(num_arr, arr_size));

    return 0;
}

int getSmallestNum(int arr[],int arr_size)
{
    int smallest = arr[0];

    for (int i = 0; i<arr_size ; i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    return smallest;
}