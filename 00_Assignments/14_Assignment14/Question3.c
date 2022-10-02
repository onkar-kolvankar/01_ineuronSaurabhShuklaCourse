// Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int num_array[10] , sum_even = 0 , sum_odd = 0;
    
    printf("Enter 10 numbers :");
    for(int i = 0 ; i< 10 ; i++)
    {
        scanf("%d", &num_array[i]);
    }
    
    // Traverse to find even and odd nos and do their sum

    for (int i = 0; i < 10; i++)
    {
        if(num_array[i] % 2 == 0)
            sum_even += num_array[i];
        else
            sum_odd += num_array[i];
    }

    printf("Sum of even nos = %d\nSum of odd nos = %d", sum_even, sum_odd);

    return 0;
}