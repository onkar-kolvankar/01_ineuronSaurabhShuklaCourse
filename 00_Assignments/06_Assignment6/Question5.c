// Write a program to calculate sum of cubes of first N natural numbers
// Formula - Summ(Cubes) = [(n)(n+1)/2]^2
#include<stdio.h>
int main()
{
    int n , sum = 0;
    printf("Enter a number :");
    scanf("%d",&n);

    // Method 1 - Formula
    printf("SUM = %d", (((n) * (n + 1)) / 2) * (((n) * (n + 1)) / 2));

    // Method 2
    for(int i = 1; i<=n ;i++)
    {
        sum = sum + i*i*i;
    }
    printf("\nSUM = %d",sum);

    return 0;
    
}