// Write a program to check whether a given number is an even number or an odd number without using % operator
// 0 -> even 

#include<stdio.h>
int main()
{
    int num , quotient;
    printf("enter number: ");
    scanf("%d",&num);

    quotient = num / 2;
    num - quotient * 2 == 0 ? printf("%d is Even",num) : printf("%d is Odd",num);

    return 0;
}