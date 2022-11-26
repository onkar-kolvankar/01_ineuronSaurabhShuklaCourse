// Write a function to count words in a given string

#include<stdio.h>

int getWordsCount(char str[])
{
    int words_count = 0 , prev = 0; // prev 0-> space , 1 -> character

    for(int i = 0 ; str[i] ; i++)
    {
        if(str[i] != 32 && prev == 0)
        {
            words_count++;
            prev = 1;
        }

        if(str[i] == 32)
        {
            prev = 0;
        }
    }

    return words_count;
}
int main()
{
    char string[100] = "      sOnkar Kolvankar studies         in Fy MCA       ";

    printf("Number of words in this string = %d",getWordsCount(string));
    
    return 0;
}
