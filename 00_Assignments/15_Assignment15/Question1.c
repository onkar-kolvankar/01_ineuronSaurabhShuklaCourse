// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>

int getGreatestNum(int[], int);
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

    printf("Largest number in array is %d", getGreatestNum(num_arr, arr_size));

    return 0;
}

int getGreatestNum(int arr[],int arr_size)
{
    int largest = 0;

    for (int i = 0; i<arr_size ; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}