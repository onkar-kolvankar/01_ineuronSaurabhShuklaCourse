// Write a function to rotate an array by n position in d direction. The d is an indicative 
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
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
    int temp;
    for(int i = 1 ; i<= pos ; i++)
    {
        // CODE to rotate array elements by 1 position to LEFT.
        temp = arr[0];
        for (int j = 0; j < arr_size - 1;j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[arr_size - 1] = temp;
    }
}
void rightRotate(int arr[], int arr_size, int pos)
{
    int temp;
    for (int i = 1;i<= pos ; i++)
    {
        temp = arr[arr_size - 1];
        for (int j = arr_size - 1; j >=1 ; j-- )
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}