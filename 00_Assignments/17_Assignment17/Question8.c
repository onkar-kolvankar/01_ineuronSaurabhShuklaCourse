// Write a program in C to copy one string to another string

#include<stdio.h>

int main()
{
    char str1[20] = "Onkar Kolvankar";
    char str2[20];

    for(int i = 0 ; str1[i] ; i++)
    {
        str2[i] = str1[i];
    }

    printf("%s" ,str2);
    return 0;
}