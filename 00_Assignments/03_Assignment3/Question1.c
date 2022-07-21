// Write a program to check whether a given number is positive or non-positive
// 13 -> Positive , -4 -> Non-Positive  0 -> Non-Positive 0.3453 -> Positive
#include<stdio.h>
int main()
{
    float num;
    printf("Enter a number : ");
    scanf("%f",&num);

    num>0 ? printf("The number %f is Positive",num) : printf("The number %f is Non-Positive",num);

    return 0;

}