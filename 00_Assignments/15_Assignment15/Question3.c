// Write a function to sort an array of any size. (TSRS)
#include<stdio.h>

void sortArray(int[], int);
void printArray(int[], int);

int main()
{
    int array_size = 5;

    int num_array[array_size];
    printf("Enter %d elements of array :", array_size);

    for(int i = 0; i<array_size ; i++)
    {
        scanf("%d", &num_array[i]);
    }

    printf("Original Array :");
    printArray(num_array, array_size);

    sortArray(num_array, array_size);

    printf("\nSorted array :");
    printArray(num_array, array_size);
    
    return 0;
}
void sortArray(int arr[],int arr_size)
{
    int isSwapped = 1 ,temp;

    while(isSwapped)
    {
        isSwapped = 0;
        for (int i = 0; i< arr_size-1 ; i++)    // index = 0,1,2,3,4 so we check till index = 3 i.e second last element
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = temp;

                isSwapped = 1;  // change flag to 1 i.e swapping took place.
            }
        }
    }
}
void printArray(int arr[],int arr_size)
{
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}