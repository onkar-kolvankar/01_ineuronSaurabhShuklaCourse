// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int getEvenFirstNatNosSum(int);
int main()
{
    int num;
    printf("Enter a number to get sum of even natural nos :");
    scanf("%d", &num);

    printf("Sum of %d first even natural nos = %d ", num,getEvenFirstNatNosSum(num));
    return 0;
}
int getEvenFirstNatNosSum(int n)
{
    if(n==1)
        return 2;

    return (2 * n) + getEvenFirstNatNosSum(n - 1);
}