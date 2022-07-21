// Write a program to check whether a given number is positive, negative or zero.
// 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("%d is Positive",num);
    }
    else if(num == 0)
    {
        printf("%d is Zero",num);
    }
    else 
    {
        printf("%d is Negative number",num);
    }
    return 0;
}