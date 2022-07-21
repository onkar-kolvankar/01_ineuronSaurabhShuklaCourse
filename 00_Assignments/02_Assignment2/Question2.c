// Write a program to print a given number without its last digit
// 5 -> 0 , 24 -> 2 , 55456 -> 5545
#include<stdio.h>
int main()
{   
    int num , start_digits;
    printf("Enter a number:");
    scanf("%d",&num);

    start_digits = num / 10;

    printf("Number %d without its last digits is %d",num , start_digits);

    return 0;
}