// Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n ,sum = 0;
    printf("Enter how many nat nos you want :");
    scanf("%d",&n);

    // Method 1
    printf("Sum of first %d natural nos = %d",n, (n*(n+1))/2 );

    // Method 2
    /*
    for(int i = 1 ; i<= n ; i++){
        sum = sum + i;
    }
    printf("\nSUM = %d ",sum);
    */

    return 0;
}