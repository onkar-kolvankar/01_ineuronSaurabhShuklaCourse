/*
Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/
//
#include<stdio.h>
int main()
{
    int num , num_to_append;
    printf("Enter a number and number to append: ");
    scanf("%d",&num);
    printf("Enter a number to be appended : ");
    scanf("%d",&num_to_append);

    printf("Original number = %d , New number = %d ", num , num*10+num_to_append);

    return 0;
}