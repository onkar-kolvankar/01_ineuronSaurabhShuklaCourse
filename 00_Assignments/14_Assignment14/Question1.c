// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int num_array[10] , sum = 0;

    
    printf("Enter 10 numbers :");
    for(int i = 0 ; i<10 ; i++)
        scanf("%d", &num_array[i]);

    // cal sum of elements of array.
    for (int i = 0; i < 10; i++)
        sum += num_array[i];

    printf("Sum of all 10 elements in array = %d", sum);
    return 0;
}