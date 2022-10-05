// Write a function in C to read n number of values in an array and display it in reverse order.
// MY UNDERSTANDING - arr{15,47,26,354,2} -> n = 3 -> op = 26 47 15
#include<stdio.h>
void displayNosInReverse(int[],int);

int main()
{
    int array_size,num;
    printf("Enter size of array:");
    scanf("%d", &array_size);

    int num_array[array_size];

    printf("Enter elements of array :");
    for (int i = 0; i < array_size ; i++)
    {
        scanf("%d", &num_array[i]);
    }
    
    printf("Enter number of array elements to display in reverse order:");
    scanf("%d", &num);
    while(num < 1 || num > array_size)
    {
        printf("Please enter number in range of 1 to %d :", array_size);
        scanf("%d", &num);
    }
    
    displayNosInReverse(num_array,num);

    return 0;
}
void displayNosInReverse(int arr[], int no_of_elmts)
{
    for(int i = no_of_elmts - 1 ; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    }
}