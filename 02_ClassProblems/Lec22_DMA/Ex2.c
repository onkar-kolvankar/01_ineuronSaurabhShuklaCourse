#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *ptr1 ,*ptr2;

    ptr1 = (char *)malloc(2 * sizeof(char));
    *ptr1 = 'm';
    *(ptr1 + 1) = 'y';

    

    printf("\n%c %c",*(ptr1),*(ptr1 + 1));

    ptr1 = (char *)realloc(ptr1,5 * sizeof(char));
    *(ptr1 + 2) = 'n';
    *(ptr1 + 3) = 'a';
    *(ptr1 + 4) = 'm';
    
    printf("\n%c %c %c %c %c",*(ptr1),*(ptr1 + 1),*(ptr1 + 2),*(ptr1 + 3),*(ptr1 + 4));

    return 0;
}