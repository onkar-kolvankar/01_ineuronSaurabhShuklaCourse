// Write a function to find the first occurrence of adjacent duplicate values in the array. 
// Function has to return the value of the element
#include<stdio.h>
int getAdjacentDuplicate(int[], int);
int main()
{
    int array_size = 5;
    int num_array[array_size];

    printf("Enter elements of array:");
    for (int i = 0; i < array_size;i++)
    {
        scanf("%d", &num_array[i]);
    }

    printf("First occurrence of adjancent duplicate values in array is %d", getAdjacentDuplicate(num_array, array_size));


    return 0;
}
int getAdjacentDuplicate(int arr[],int arr_size)
{
    for (int i = 0; i < arr_size - 1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            return arr[i];
        }
    }
    // DONT KNOW WHAT TO RETURN
    return;
}