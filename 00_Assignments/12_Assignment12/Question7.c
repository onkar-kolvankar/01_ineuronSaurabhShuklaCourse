// Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
int getSumSqNatNos(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printf("Sum of squares = %d",getSumSqNatNos(n));
    return 0;
}
int getSumSqNatNos(int x)
{
    if(x == 1)
        return 1;
    return getSumSqNatNos(x - 1) + x * x;
}