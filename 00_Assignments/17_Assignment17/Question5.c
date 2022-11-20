// Write a program to convert a given string into lowercase
// A - 65 Z - 90 , a - 97 , z -122

#include<stdio.h>

int main()
{
    char str[20] = "Onkar Kolvankar";

    // There is difference of 32 between Letters uppercase and lowercase

    for(int i = 0 ; str[i] ; i++)
    {
        if(str[i] >= 65 && str[i] <= 90) 
            str[i] = str[i] + 32;
    }

    printf("%s" ,str    );
    
    return 0;
}