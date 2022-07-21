//  Write a program to print unit digit of a given number
// 5 -> 5 , 24 -> 4 , 43667 -> 7
#include<stdio.h>
int main()
{
    // METHOD 1 (Long Method)
    /*
    int num , start_digits , unit_digit;
    printf("Enter a number:");
    scanf("%d",&num);

    start_digits = num / 10;
    start_digits *= 10;

    unit_digit = num - start_digits;

    printf("Unit digit of %d is = %d",num,unit_digit);
    */

    // METHOD 2 (Short Method)
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    printf("Unit digit of %d is %d",num ,num % 10);

    return 0;
}