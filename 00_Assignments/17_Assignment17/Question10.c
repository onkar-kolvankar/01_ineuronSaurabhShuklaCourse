// Write a program in C to Find the Frequency of Characters

#include<stdio.h>
#include<string.h>

int main()
{
    char str[30] = "Onkar Rajesh Kolvankar";

    // Here we make another array with length 288 i.e total characters possible and then 
    // store 0 in all of them initially
    // then we increase the count in them acc to Decimal of that character at that index

    int char_count[128];

    // set all values of char_count array 0

    for(int i = 0 ; i < 128 ; i++)
        char_count[i] = 0;

    // make all lowercase to count easily
    strlwr(str);

    // 
    for(int i = 0 ; str[i] ; i++)
    {
        char_count[str[i]] ++;
    }

    // now print every character with their frequency
    for(int i = 0 ; i < 128 ; i++)
    {
        if(char_count[i])
            printf("%c -> %d\n",i,char_count[i]);
    }

    return 0;
}