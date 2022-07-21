// Write a program to check whether a given number is a three-digit number or not.
// 345 - 3 digit number , 1234 - not 3digit no

#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num >= 100 && num <=999)
    {
        printf("%d is 3-digit number",num);   
    }
    else
    {
        printf("%d is Not a 3-digit number",num);
    }
    return 0;

}