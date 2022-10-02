// Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
int getNoOfDigits(int);

int main()
{
    int num;
    printf("Enter a number to get its number of digits:");
    scanf("%d", &num);

    printf("Number of digits in  %d = %d ", num , getNoOfDigits(num));
    return 0;
}
int getNoOfDigits(int n)
{
    if(n == 0)
        return 0;

    return getNoOfDigits(n / 10) + 1;
}