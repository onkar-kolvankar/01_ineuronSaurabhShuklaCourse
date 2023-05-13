// Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>

int main()
{
    int no_strings;
    printf("Enter no of strings :");
    scanf("%d",&no_strings);
    fflush(stdin);

    char strings[no_strings][40];
    char search_str[40];
    // enter city names
    
    for(int i = 0 ; i < no_strings ; i++)
    {
        printf("Enter the string no.%d :",i);
        fgets(strings[i],40,stdin);
        fflush(stdin);
    }

    // enter string to search
    printf("Enter the string to search :");
    fgets(search_str,40,stdin);
    fflush(stdin);

    // now search the string
    for(int i = 0 ; i < no_strings ; i++)
    {
        if(strcmp(search_str,strings[i]) == 0)
        {
            printf("Found String in the List.");
            return 0;
        }
    }
    printf("There is no string \"%s\" in the list.",search_str);


    return 0;
}