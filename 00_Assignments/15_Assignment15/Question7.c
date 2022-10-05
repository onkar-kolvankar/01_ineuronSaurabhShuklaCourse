// Write a function in C to count a total number of duplicate elements in an array
// EX1: arr{15,65,8,24,15,65,8,24, 78 ,96} => dup = 8
#include<stdio.h>

int getDuplicatesCount(int[], int);

int main()
{
    int array_size;
    printf("Enter size of array :");
    scanf("%d", &array_size);

    int num_array[array_size];

    printf("Please enter %d elements of array:",array_size);
    for (int i = 0; i < array_size;i++)
    {
        scanf("%d", &num_array[i]);
    }

    printf("Total duplictes in array are %d.", getDuplicatesCount(num_array, array_size));

    return 0;
}
int getDuplicatesCount(int arr[],int arr_size)
{
    int count = 0;
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size ; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
    }
    return count;
}