// Write a function to check whether a given string is palindrome or not

#include<stdio.h>
#include<string.h>
void isPalindrome(char[]);
int main()
{
    char str[20] = "Madam" ,str2[20] = "Onkark";

    isPalindrome(strlwr(str));
    isPalindrome(strlwr(str2));

    
    return 0;
}

void isPalindrome(char string[])
{
    int string_length ,flag = 0;

    for(string_length = 0 ; string[string_length] ; string_length++ );

    if(string_length % 2 == 0)
    {
        for( int i = 0 ; i < (string_length/2) ; i++)
        {
            if(string[i] != string[(string_length-1) - i] )
            {
                flag = 1;
                break;
            }
                

        }
    }
    else
    {
        for( int i = 0 ; i < ((string_length-1)/2) ; i++)
        {
            if(string[i] != string[(string_length-1) - i] )
            {
                flag = 1;
                break;
            }

        }
    }

    if(flag)
        printf("NOT PALINDROME\n");
    else
        printf("PALINDROME\n");


}