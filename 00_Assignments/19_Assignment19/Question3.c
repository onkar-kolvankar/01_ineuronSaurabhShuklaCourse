// Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>

int main()
{
    char str[5][30] ;

    for(int i = 0 ; i < 5 ; i++)
    {
        // We use fgets() to take string input NOT scanf("%s") X
        fgets(str[i],30,stdin);
    }
    printf("\n");
    for(int i = 0 ; i<5 ; i++)
    {
        printf("%s",str[i]);
        printf("\n");
    }

    return 0;
}