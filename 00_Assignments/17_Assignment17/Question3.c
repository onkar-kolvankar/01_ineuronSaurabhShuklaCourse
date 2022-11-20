// Write a program to count vowels in a given string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[30] = "aeiou";
    int vowels_count = 0;

    // You need to make string in Either Uppercase or Lowercase so A == a
    strlwr(str);

    for(int i = 0 ; str[i] ; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels_count++;
    }
    
    printf("Number of vowels in this string is %d",vowels_count);

    return 0;
}
