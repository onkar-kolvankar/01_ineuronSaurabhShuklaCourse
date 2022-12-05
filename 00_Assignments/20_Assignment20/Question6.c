// Write a program to calculate the length of the string using a pointer

#include<stdio.h>
int getStrLen(char *);
int main()
{
    char str[30] = "Onkar Kolvankar";

    printf("Length of string = %d",getStrLen(str));
    
    return 0;
}
int getStrLen(char *ptr)
{
    int count = 0;
    for(count = 0 ;  *(ptr + count) != '\0' ; count++ );

    return count;
}