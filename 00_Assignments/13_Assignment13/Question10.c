// Write a program in C to calculate the power of any number using recursion
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number to get sum of odd natural nos :");
    scanf("%d", &num);

    printf("Sum of %d first odd natural nos = %d ", num,getOddFirstNatNosSum(num));
    return 0;
}