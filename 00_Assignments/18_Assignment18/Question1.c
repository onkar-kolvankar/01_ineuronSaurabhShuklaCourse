// Write a function to calculate length of the string

#include<stdio.h>

int getLength(char[],int);
int main()
{
    char str[30] = "Onkar Kolvankar";

    printf("Length = %d" ,getLength(str,30));

    
    return 0;
}

int getLength(char string[],int size)
{
    int i;
    for(i =  0 ; string[i] ; i++);

    return i;
}