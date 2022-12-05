// Write a program to search a string in the list of strings.

#include<stdio.h>

int main()
{
    int no_strings;
    printf("Enter no of strings :");
    scanf("%d",&no_strings);

    char strings[no_strings][40];
    char search_str[40];
    // enter city names
    for(int i = 0 ; i < no_strings ; i++)
    {
        fgets(strings[i],40,stdin);
        fflush(stdin);
    }

    // enter string to search
    fgets(search_str,40,stdin);
    fflush(stdin);

    // now search the string
    for(int i = 0 ; i < no_strings ; i++)
    {
        for(int j = 0 ; strings[i][j] || )
    }


    return 0;
}