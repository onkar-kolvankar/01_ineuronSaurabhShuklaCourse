// Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
#include<string.h>

int main()
{
    char character_to_find;
    char str[30] = "Onkar Rajesh Kolvankar";
    int count = 0;

    printf("Enter a character to find in string :");
    scanf("%c",&character_to_find);

    // You need to turn string Either in Smallcase or Uppercase to get the count of the letter
    strlwr(str);

    for(int i = 0 ; str[i] ; i++)
    {
        if(character_to_find == str[i])
            count++;
    }

    printf("Count of the character '%c' in string = %d",character_to_find,count);


    return 0;
}