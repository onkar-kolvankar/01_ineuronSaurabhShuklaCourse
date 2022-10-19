// Write a program to find second smallest in an array.Take array values from the user
// METHOD 2 - i> Sort array.
//            ii> Return 2nd element.
//          What if 2nd element = smallest element then what to return
//          So we will return next smallest element.
#include<stdio.h>

int getSecondSmallestArrayElmt(int[], int);
void sortArray(int[], int);

int main()
{
    int arr_size = 5 ;
    int num_arr[arr_size];

    printf("Enter %d elements of array :",arr_size);
    for (int i = 0; i < arr_size;i++)
    {
        scanf("%d", &num_arr[i]);
    }

    printf("Second smallest element = %d", getSecondSmallestArrayElmt(num_arr,arr_size));

    return 0;
}

int getSecondSmallestArrayElmt(int arr[] , int arr_size)
{
    sortArray(arr, arr_size);
    // LOGIC - when all elements are same OR smallest element is repeated
    for (int i = 1/* 2nd smallest element*/ ;  i < arr_size; i++ )
    {
        if(arr[i] != arr[0] )
        {
            return arr[i];
        }
    }
    // cursor reaches here when all elements are same -> so return same value.
    return arr[arr_size - 2];
}
void sortArray(int mtx[],int arr_size)
{
    int temp;
    for(int i = 0 ; i < arr_size - 1 ; i++)
    {
        for (int j = i + 1; j<arr_size ; j++)
        {
            if(mtx[i] > mtx[j])
            {
                // swap the nos
                temp = mtx[i];
                mtx[i] = mtx[j];
                mtx[j] = temp;
            }
        }
    }
}


