// Write a program to find the number of vowels in each of the no_string strings stored in two 
// dimensional arrays, taken from the user.
/*
    METHOD 1 -
        - I have taken an vowel_freq 2-d array which stores the vowel's frequency in it
        - They are initialized as 0 firse
        - and vowel_freq array's size is then ASCII value of 'u'
*/
#include<stdio.h>

int main()
{
    
    char str[5][30];
    int vowel_freq[5][119] = {0};

    for(int i = 0 ; i<5 ; i++)
    {
        printf("Enter string No.%d :",i+1);
        fgets(str[i] ,30,stdin);
    }




    // loop to traverse in 2d array and find which vowls are there and increase their count  
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; str[i][j] ; j++) // stop when Null Char appears
        {
            if(str[i][j] == 'a' || str[i][j] =='e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u'  || str[i][j] == 'A' || str[i][j] =='E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U')
            {
                vowel_freq[i][str[i][j]] ++;
            }
        }
    }

    // print no of vowels in each string
    for(int i = 0 ; i < 5 ; i++)
    {
        int counter = 0;
        for(int j = 0 ; j < 119 ; j++)
        {
            if(vowel_freq[i][j])
            {
                counter += vowel_freq[i][j];
            }
        }
        printf("Vowels in String %d = %d\n",i+1,counter);

    }

    return 0;
}