// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int getSumOfSquaresOfNatNos(int);
int main()
{
    int num;
    printf("Enter a number to get sum of squares of natural nos :");
    scanf("%d", &num);

    printf("Sum of %d first odd natural nos = %d ", num, getSumOfSquaresOfNatNos(num) );
    return 0;
}
int getSumOfSquaresOfNatNos(int n)
{
    if(n==1)
        return 1;

    return n * n + getSumOfSquaresOfNatNos(n - 1);
}