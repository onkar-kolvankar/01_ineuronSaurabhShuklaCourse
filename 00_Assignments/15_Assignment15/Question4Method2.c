// Write a function to rotate an array by n position in d direction. The d is an indicative 
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// METHOD 2 - We use temp arr to store elements and then copy it to original array.
//              
#include<stdio.h>
void leftRotate(int[], int, int);
void rightRotate(int[], int, int);

int main()
{
    int array_size  ,rotation_direction ,shift;

    // Input the size of array.
    printf("Please enter size of array :");
    scanf("%d", &array_size);

    // Input the elements of array.
    int num_array[array_size];
    printf("Please enter %d elements of array :",array_size);
    for (int i = 0; i < array_size;i++)
    {
        scanf("%d", &num_array[i]);
    }

    // Input the how much position shift you want to perform.
    printf("Please enter how much position you want to shift an array :");
    scanf("%d", &shift);

    // Adjust the shift value according to the array size.
    shift = shift % array_size;

    // Input whether you want to perform leftRotation or RightRotation.
    printf("\nSelect the operation to perform.\n");
    printf("0. Rotate array elements in Right Direction.\n");
    printf("1. Rotate array elements in left Direction.\n: ");

    scanf("%d", &rotation_direction);
    while(rotation_direction != 0 && rotation_direction != 1)
    {
        printf("Please enter either 0 or 1.\n: ");
        scanf("%d", &rotation_direction);
    }

    // Call functions according to what you selected. 

    if(rotation_direction == 0)
        rightRotate(num_array, array_size, shift);
    else
        leftRotate(num_array, array_size, shift);


    // print the rotated array.
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", num_array[i]);
    }

    return 0;
}


void leftRotate(int arr[],int arr_size,int pos)
{
    int temp_arr[arr_size] , temp_index = 0;
    // copy elements from pos to end to temp array
    for(int i = pos ; i < arr_size ; i++)
    {
        temp_arr[temp_index] = arr[i];
        temp_index++;
    }
    // Now copy rem
    for (int i = 0; i < pos; i++)
    {
        temp_arr[temp_index] = arr[i];
        temp_index++;
    }
    // Now copy elements in original array.
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = temp_arr[i];
    }
}
void rightRotate(int arr[], int arr_size, int pos)
{
    // i> Here first we will copy last 'pos' elmts in temp array from (arr_size - pos) - < (arr_size)
    // ii> then we will copy elmts from arr[0] to < arr[arr_size - pos]
    int temp_arr[arr_size], temp_arr_index = 0;

    for (int i = arr_size - pos; i < arr_size ; i++)
    {
        temp_arr[temp_arr_index] = arr[i];
        temp_arr_index++;
    }
    for(int i = 0 ; i < arr_size - pos ; i++)
    {
        temp_arr[temp_arr_index] = arr[i];
        temp_arr_index++;
    }

    // Now copy elements in original array.
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = temp_arr[i];
    }
}