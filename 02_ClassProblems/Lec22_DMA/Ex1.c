#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *ptr;

    ptr = (char *)malloc(sizeof(char));
    *ptr = 'm';

    printf("\n%c",*(ptr));

    return 0;
}