// Write a program to print greater between two numbers. Print one number of both are the same
// 12 45 -> 45 , 16 16 -> 16
#include<stdio.h>
int main()
{
    float num1 , num2;
    printf("Enter two numbers :");
    scanf("%f %f",&num1,&num2);

    if(num1 > num2)
    {
        printf("%f",num1);
    }    
    else if(num1 < num2)
    {
        printf("%f",num2);
    }
    else
    {
        printf("%f",num1);
    }

    return 0;
}