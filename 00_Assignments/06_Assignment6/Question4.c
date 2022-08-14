// Write a program to calculate sum of squares of first N natural numbers
// formula -> summ(n*n) = [n(n+1)(2n+1)]/6
#include<stdio.h>
int main()
{
    int n , sum = 0;
    printf("Enter how many nos squares you want to add :");
    scanf("%d",&n);

    // Method 1 = Formula
    printf("SUM = %d",( (n)*(n+1)*(2*n+1)) / 6  );

    // Method 2 
    for(int i = 1 ; i<=n ; i++)
    {
        sum += i*i;

    }
    printf("\nSUM = %d",sum );


    return 0;
}