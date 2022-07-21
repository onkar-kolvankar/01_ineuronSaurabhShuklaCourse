// Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b respectively : ");
    scanf("%d %d",&a,&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a = %d and b = %d",a,b);

    return 0;
}