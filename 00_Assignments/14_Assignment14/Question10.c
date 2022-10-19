// Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include<stdio.h>
int main()
{
    int arr_size = 5;
    int num_array[arr_size] , copied_array[arr_size];

    printf("Enter %d elements of array:",arr_size);
    for(int i = 0 ; i<arr_size ; i++)
    {
        scanf("%d", &num_array[i]);
    }

    // Code to copy elmts to another array
    for(int i = 0 ; i<arr_size ; i++)
    {
        copied_array[i] = num_array[i];
    }

    // print copied array elmts
    printf("\n");
    for(int i = 0 ; i<arr_size ; i++)
    {
        printf("%d ", copied_array[i]);
    }
    return 0;
}

