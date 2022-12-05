// Write a program to count the number of vowels and consonants in a string using a
// pointer

#include<stdio.h>
void countVowelConsonants(char *);

int main()
{

    char str[30] = "Onkar Kolvankar";
    countVowelConsonants(str);
    return 0;
}
void countVowelConsonants(char *str_ptr)
{
    int count_vowels = 0,count_consonants = 0; 
    for(int i = 0 ; *(str_ptr + i) ; i++)
    {
        if( (str_ptr[i] >= 65 && str_ptr[i] <=90) || (str_ptr[i] >= 97 && str_ptr[i] <=122) )
        {
            if( str_ptr[i] == 'a' || str_ptr[i] == 'e'|| str_ptr[i] == 'i' || str_ptr[i] == 'o'|| str_ptr[i] == 'u' || str_ptr[i] == 'A'|| str_ptr[i] == 'E' || str_ptr[i] == 'I'|| str_ptr[i] == 'O' || str_ptr[i] == 'U')
            {
                count_vowels++;
            }
            else{
                count_consonants++;
            }
        }
    }

    printf("No of vowels = %d\nNo of consonants = %d",count_vowels,count_consonants);
}
