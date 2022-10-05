// Write a function in C to merge two arrays of the same size sorted in descending order
#include<stdio.h>

void mergeAndSortArray(int[], int[], int, int[]);

int main()
{
    int array_size;
    printf("Enter size of arrays you want to combine(Both of same size) :");
    scanf("%d", &array_size);

    // int array1[5] = {45, 23, 0, 2, 34}, array2[5] = {98, 1, 14, 23, 133};
    // op- 133,98,98,45,34,23,23,14,2,1
    
    

    int array1[array_size] , array2[array_size] ;
    int merged_array[array_size*2];

    printf("Please enter %d elements of Array 1:",array_size);
    for (int i = 0; i < array_size;i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\nPlease enter %d elements of Array 2:",array_size);
    for (int i = 0; i < array_size;i++)
    {
        scanf("%d", &array2[i]);
    }

    
    mergeAndSortArray(array1, array2, array_size, merged_array);

    // print merge array
    printf("\nMerged and sorted array :\n");
    for(int i = 0 ; i < array_size*2 ; i++)
    {
        printf("%d ", merged_array[i]);
    }

    return 0;
}
void mergeAndSortArray(int arr1[],int arr2[],int arr_size,int merged_arr[])
{
    // Code to insert elmts in merged_arr
    for(int i = 0 ; i < arr_size ; i++)
    {
        merged_arr[i] = arr1[i];
    }
    for (int i = arr_size; i < arr_size * 2; i++)
    {
        merged_arr[i] = arr2[i - arr_size];
    }

    // Code to sort array in decending order
    int isSwapped = 1 , temp;

    while(isSwapped)
    {
        isSwapped = 0;  // no swapping took place till now.
        for (int i = 0; i < (arr_size * 2) - 1; i++)
        {
            if(merged_arr[i] < merged_arr[i+1])
            {
                // swap nos
                temp = merged_arr[i];
                merged_arr[i] = merged_arr[i + 1];
                merged_arr[i + 1] = temp;

                // change the isSwapped variable to 1
                isSwapped = 1;

            }
        }
    }
}