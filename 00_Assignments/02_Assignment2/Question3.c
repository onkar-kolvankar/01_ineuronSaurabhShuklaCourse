// Write a program to swap values of two int variables
//
#include<stdio.h>
int main()
{
    int n1,n2,temp_variable;
    printf("Enter vale of n1 and n2 respectively : ");
    scanf("%d %d",&n1,&n2);

    temp_variable = n1;
    n1 = n2;
    n2 = temp_variable;

    printf("The value of n1 = %d and n2 = %d",n1,n2);

    return 0;
}