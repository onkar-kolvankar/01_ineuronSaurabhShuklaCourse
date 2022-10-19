// Write a program to find second largest in an array.Take array values from the user
// METHOD 2 - i> Sort array.
//            ii> Return 2nd last element.
//          What if 2nd last element = largest element then what to return
//          So we will 
#include<stdio.h>

int getSecondLargestArrayElmt(int[], int);
void sortArray(int[], int);

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
    sortArray(arr, arr_size);
    // LOGIC - when all elements are same OR largest element is repeated
    for (int i = arr_size - 2 /* 2nd last element*/; i >= 0; i-- )
    {
        if(arr[i] != arr[arr_size - 1] /* Last elemt */)
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


