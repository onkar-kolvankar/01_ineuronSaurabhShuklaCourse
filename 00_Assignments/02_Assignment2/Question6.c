// Write a program which takes a character as an input and displays its ASCII code
// 

#include<stdio.h>
int main()
{
    char input_char;

    printf("Enter a character :");
    scanf("%c",&input_char);

    printf("ASCII code for %c is %d",input_char , input_char);

    return 0;
}