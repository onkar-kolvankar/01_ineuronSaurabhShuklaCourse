// Write a program to find the second smallest number in an array.Take array values
// from the user.
#include<stdio.h>

int getSecondSmallestArrayElmt(int[], int);

int main()
{
    int arr_size = 5;
    int num_arr[arr_size];

    printf("Enter elements of array :");
    for(int i = 0 ; i<arr_size ; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    printf("Second smallest element in array = %d", getSecondSmallestArrayElmt(num_arr, arr_size));

    return 0;
}
int getSecondSmallestArrayElmt(int arr[],int arr_size)
{
    int smallest = arr[0], second_smallest = arr[1] ,sum = 0;

    // code to check if all emts in array are equal
    for(int i = 0 ; i<arr_size ; i++)
    {
        sum += arr[i];
    }

    if(sum == arr[0] * arr_size)
    {
        return arr[0];
    }
    else
    {
        for(int i = 0 ; i<arr_size ; i++)
        {
            if(arr[i] < smallest)
            {
                second_smallest = smallest;
                smallest = arr[i];
            }
            else if(arr[i] > smallest && arr[i] < second_smallest)
            {
                second_smallest = arr[i];
            }
        }

        return second_smallest;
    }

}