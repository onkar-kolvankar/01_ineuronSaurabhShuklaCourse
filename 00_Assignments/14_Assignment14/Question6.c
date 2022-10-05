// Write a program to sort elements of an array of size 10. Take array values from the
// user
#include<stdio.h>

void printArray(int[] , int);
void sortArray(int[], int);

int main()
{
    int arr_size = 10;

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
    int isSwapped = 1, temp;
    while (isSwapped)
    {
        isSwapped = 0;
        for (int i = 0; i < array_size - 1; i++)
        {
            if(num_array[i] > num_array[i+1])
            {
                temp = num_array[i];
                num_array[i] = num_array[i + 1];
                num_array[i + 1] = temp;

                isSwapped = 1;
            }
        }
    }
}