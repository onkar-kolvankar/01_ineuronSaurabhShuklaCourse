// Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int num , remainder , result = 0 ; 
    printf("Enter a number :");
    scanf("%d",&num);

    while(num != 0)
    {
        remainder = num % 10;
        num = num / 10;
        result = result * 10 + remainder;
    }
    printf("Reversed Number :%d" , result);

    return 0;
}