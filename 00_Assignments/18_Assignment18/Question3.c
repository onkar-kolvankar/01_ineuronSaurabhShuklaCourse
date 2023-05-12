// Write a function to compare two strings.
/*
    -1 => 
    0  => Equal / Same string
    1  => Reverse alphabetical order
*/

#include<stdio.h>
#include<string.h>

int compareStrings(char[] ,char[]);

int compareStrings(char str1[] ,char str2[])
{
    int i;
    for(i = 0 ; str1[i] || str2[i] ; i++)
    {
        if(str1[i] < str2[i])   // a < e - alphabetical order -> return -1
        {
            return -1;
        }
        else if(str1[i] > str2[i])
        {
            return 1;
        }
        else                    // when characters are same.
        {
            continue;
        }
    }
    // printf("\ni = %d\n",i);
    if(str1[i] == '\0' && str2[i] != '\0')     // app , apple -> alphabetical order -> return -1
        return -1;
    else if(str2[i] == '\0' && str1[i] != '\0')                   // apple,app -> reverse alphabetical order -> return 1
        return 1;
    else if(str1[i] == '\0' && str2[i] == '\0')
        return 0;
}

int main()
{
    // char str1[20] = "apple KJ" , str2[20] = "apple K";

    char str1[20] , str2[20] ;
    printf("Enter 1s string :");
    fgets(str1,20,stdin);
    fflush(stdin);

    printf("\nEnter 2nd string :");
    fgets(str2,20,stdin);
    fflush(stdin);

    printf("\n%d",strcmp(str1,str2));

    printf(" -> %d",compareStrings(str1,str2));
    
    return 0;
}