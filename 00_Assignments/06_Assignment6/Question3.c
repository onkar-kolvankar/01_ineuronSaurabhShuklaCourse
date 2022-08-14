// Write a program to calculate sum of first N odd natural numbers
// Formula - Summ(Odd natural nos) = n*n

#include<stdio.h>
int main()
{
    int n ,sum = 0;
    printf("Enter how many odd natural nos you need to add :");
    scanf("%d",&n);

    // Method 1 (Formula)
    printf("SUM = %d", n*n);

    // Method 2
    // Here Tn = (2i - 1) for odd nos series and comm diff = 2 
    for(int i = 1; i<=n ;i++)
    {
        sum += 2*i - 1;
    }
    printf("\nSUM = %d",sum);

    return 0;
}