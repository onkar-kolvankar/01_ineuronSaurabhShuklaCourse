// Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character
// lowercase alphabet - [97,122] , uppercase alphabet - [65,90] , digits 0,9 -[48,57] , 
// special character - [33,47] U [58,64] U [91,96] U [123,126]
#include<stdio.h>
int main()
{
    char input_character;
    printf("Enter the character :");
    scanf("%c",&input_character);

    if(input_character >= 97 && input_character <= 122)
    {
        printf("LowerCase Alphabet");
    }
    // Code for Uppercase Alphabets
    else if( input_character >= 65 && input_character <= 90)
    {
        printf("UpperCase Alphabet");
    }
    // Code for Digits
    else if(input_character >= 48 && input_character <= 57)
    {
        printf("Digits");
    }

    // Code for Special Character.
    else if (input_character >= 33 && input_character<=47 )
    {
        printf("Special Character.");
    }
    else if(input_character >=58 && input_character <= 64)
    {
        printf("Special Character.");
    }
    else if(input_character >= 91 && input_character <= 96)
    {
        printf("Special Character.");
    }
    else if (input_character >= 123 && input_character <= 126)
    {
        printf("Special Character.");
    }
    else
    {
        printf("These is not valid");
    }

    return 0;
}