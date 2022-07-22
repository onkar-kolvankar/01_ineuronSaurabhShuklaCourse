#include<stdio.h>

// Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character
// lowercase alphabet - [97,122] , uppercase alphabet - [65,90] , digits 0,9 -[48,57] ,
// special character - [33,47] U [58,64] U [91,96] U [123,126]

// No need for knowing ASCII values for this method.

int main(int argc, char const *argv[])
{
    char user_input_char;
    printf("Enter a character:");
    scanf("%c",&user_input_char);

    if (user_input_char >= 'a' && user_input_char <= 'z')
    {
        printf("Lowercase");
    }   
    else if (user_input_char >= 'A' && user_input_char <= 'Z')
    {
        printf("Uppercase");
    }
    else if (user_input_char >= '0' && user_input_char <= '9')
    {
        printf("Digits");
    }
    else
    {
        printf("Special Character");
    }
    

    return 0;
}
