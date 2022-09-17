// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>

int getOddFirstNatNosSum(int);
int main()
{
    int num;
    printf("Enter a number to get sum of odd natural nos :");
    scanf("%d", &num);

    printf("Sum of %d first odd natural nos = %d ", num,getOddFirstNatNosSum(num));

    return 0;
}
int getOddFirstNatNosSum(int n)
{
    int sum;
    if(n==1)
        return 1;

    sum = (2 * n - 1) + getOddFirstNatNosSum(n - 1);
    return sum;
}