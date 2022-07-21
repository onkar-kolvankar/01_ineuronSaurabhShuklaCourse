/* 
Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)
*/
//
#include<stdio.h>
int main()
{
    int num , start_digits;

    printf("Enter the number:");
    scanf("%d",&num);

    start_digits = num / 10;
    printf("Enterd number = %d , Result = %d ", num , start_digits*10);

    return 0;
}