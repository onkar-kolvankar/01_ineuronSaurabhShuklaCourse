// Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>
void isAlphanumericString(char string[])
{
    int flag_alphabets = 0, flag_digit = 0;

    // A-65, Z-90,a-97,z-122 , 0-48 , 9-57

    for(int i = 0 ; string[i] ; i++)
    {
        if( (string[i]>= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122) )
            flag_alphabets = 1;
        else if(string[i] >= 48 && string[i] <= 57) 
            flag_digit = 1;
    }

    if(flag_alphabets && flag_digit)
        printf("\nAlphanumeric string\n");
    else
        printf("\nNot Alphanumeric string\n");

}

int main()
{
    char str1[20] = "Hello Agent 007" , str2[20] = "Onkar Kolvankar" , str3[20] = "#    @    -";

    isAlphanumericString(str1);

    isAlphanumericString(str2);

    isAlphanumericString(str3);

    
    
    return 0;
}
