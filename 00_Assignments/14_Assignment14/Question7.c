// Write a program to find second largest in an array.Take array values from the user
#include<stdio.h>

int getSecondLargestArrayElmt(int[], int);

int main()
{
    int arr_size = 5 ;
    int num_arr[arr_size];

    printf("Enter the elements :");
    for (int i = 0; i < arr_size;i++)
    {
        scanf("%d", &num_arr[i]);
    }

    printf("Second largest element = %d", getSecondLargestArrayElmt(num_arr,arr_size));

    return 0;
}

int getSecondLargestArrayElmt(int arr[] , int arr_size)
{
    int largest = 0, second_largest = 0 , sum = 0;

    // Logic to determine if all elmts are same or not
    // arr = {12,12,12,12,12} => second largest = 12
    for(int i = 0 ; i<arr_size ; i++)
    {
        sum += arr[i];
    }

    if(sum == arr[0] * arr_size)    // All elmts are same
    {
        return arr[0];
    }
    else                            // Atleast 1 elmt is diff
    {
        // This code only gives second largest elmt when atleast 1 elmt is diff
        // If all elmts are same then this logic gives 0 as second largest elmt.
        // arr = {78,45,2,89,23} => second largest = 78   , arr = {12,12,12,12,12} => second largest = 0
        for (int i = 0; i<arr_size ; i++)
        {
            if(arr[i] > largest)
            {
                second_largest = largest;
                largest = arr[i];
            }        
            else if( arr[i] > second_largest && arr[i] < largest)
            {
                second_largest = arr[i];
            }

        }
        return second_largest;
        
    }
}