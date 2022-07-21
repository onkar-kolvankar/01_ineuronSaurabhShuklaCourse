// Write a program to check whether a given alphabet is in uppercase or lowercase
// a= 97 z = 122 A = 65 Z = 90
#include<stdio.h>
int main()
{
    char letter;
    printf("Enter an Alphabet :");
    scanf("%c",&letter);
    if(letter >= 65 && letter <= 90 )
    {
        printf("Uppercase Letter");
    }
    else if(letter >= 97 && letter <= 122)
    {
        printf("Lowercase Letter");
    }
    else
    {
        printf("Its Not an Alphabet");
    }
    return 0;
}