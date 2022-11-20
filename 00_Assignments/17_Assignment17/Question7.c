// Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.

// A-65 , Z-90 , a - 97 , z- 122
// 1 - 48 ,  9 - 57
// Special characters - 33->47 , 58->64 , 91->96,123->126


#include<stdio.h>

int main()
{
    char str[40] = "@ Onkar 14 Kol77vank$$ar (^";

    int count_alphabets = 0,count_digits = 0,count_specialChars = 0;

    for(int i  = 0 ; str[i] ; i++)
    {
        if( (str[i]>= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) )
            count_alphabets++;
        else if (str[i] >= 48 && str[i] <= 57)  
            count_digits++;
        else if( (str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >=91  && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
            count_specialChars++;
    }

    printf("Alphabets = %d\n",count_alphabets);
    printf("digits = %d\n",count_digits);
    printf("Special characters = %d\n",count_specialChars);
    return 0;
}