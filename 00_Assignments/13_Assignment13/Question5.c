// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int getSumOfDigits(int);
int main()
{
    int num;
    printf("Enter a number to get sum of its digits:");
    scanf("%d", &num);

    printf("Sum of %d's digits = %d ", num , getSumOfDigits(num));
    return 0;
}
int getSumOfDigits(int n)
{
    if(n == 0)
        return 0;

    return getSumOfDigits(n / 10) + (n % 10);
}