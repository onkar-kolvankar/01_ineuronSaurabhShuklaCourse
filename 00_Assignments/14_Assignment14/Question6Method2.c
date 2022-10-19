// Write a program to sort elements of an array of size 10. Take array values from the
// user
#include<stdio.h>

void printArray(int[] , int);
void sortArray(int[], int);

int main()
{
    int arr_size = 6;

    // printf("Enter size of array :");
    // scanf("%d", &arr_size);

    int arr[arr_size];

    printf("Enter array elements :");
    for (int i = 0; i< arr_size ; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sort array
    sortArray(arr, arr_size);

    // print sorted array
    printArray(arr, arr_size);

    return 0;
}

void printArray(int num_array[] , int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", num_array[i]);
    }
}

void sortArray(int num_array[] , int array_size)
{
    for (int i = 0; i < array_size - 1; i++)
    {
        int temp;
        for(int j = i + 1 ; j < array_size ; j++)
        {
            if(num_array[i] > num_array[j])
            {
                temp = num_array[i];
                num_array[i] = num_array[j];
                num_array[j] = temp;
            }
        }
    }
}