// Write a program to print the strings which are palindrome in the list of strings

/* ISSUE 1- I get correct output when I initialize the strings instead of taking input
            But when i take input output is wrong .
            - after checking i found that when i take input from user and store it in 2d array size of string 
              is increased by 1
            - So it created issue as last element i don't know what it was so stirng was not comming as palindrome
            - After printing  I found that EXTRA CHARACTER was 'Line Feed' = '10'

            op- Enter number of strings :2
                Enter stirng 1 :onkar rakno
                Enter stirng 2 :onkar ko
                111 110 107 97 114 32 114 97 107 110 111 10 
                String 1 length = 12
                111 110 107 97 114 32 107 111 10
                String 2 length = 9



*/

#include<stdio.h>

int main()
{
    int str_len ,flag ,no_of_strings;
    
    printf("Enter number of strings :");
    scanf("%d",&no_of_strings);

    // char strings[2][30] = {{"onkar    rakno"},{"onkar  lol  rakno"}};
    char strings[no_of_strings][30] ;

    // using this because instead of taking 1st input it was just showing msg and then showing msg to input 2nd string
    fflush(stdin);
    
    // code to input stirngs and store them in 2-d array
    for(int i = 0 ; i < no_of_strings ; i++ )
    {
        printf("Enter stirng %d :",i+1);
        fgets(strings[i], 30,stdin);
    }


    for(int i = 0 ; i < no_of_strings ; i++)
    {
        for(str_len = 0 ; strings[i][str_len] ; str_len++);
        // printf("\nString %d length = %d\n",i+1 ,str_len);
        
        // REASON - We have extra character i.e Line Feed = 10 in end of every stirng in row before Null Char = \0
        // So to make our string length correct we subtract 1 from it.
        str_len--; 


        flag = 1;   // flag = 1 => that string is palindrome and we assume that it is palindrome
        for(int j = 0  ; j < (str_len/2) -1 ; j++ )
        {
            if( (strings[i][j] != strings[i][str_len-1-j]) )
            {
                flag = 0;
                break;
            }
            // if(strings[i][j] > 97 && strings[i][j] < 122 )
            // {
            //     if( (strings[i][j] != strings[i][str_len-1-j]) && (strings[i][j] != (strings[i][str_len-1-j] - 32) )  )
            //     {
            //         flag = 0;
            //         break;
            //     }
            // }
            // else if(strings[i][j] > 65 && strings[i][j] < 90)
            // {
            //     if( (strings[i][j] != strings[i][str_len-1-j]) && (strings[i][j] != (strings[i][str_len-1-j] +32) ) )
            //     {
            //         flag = 0;
            //         break;
            //     }
            // }
            // else
            // {
            //     if( strings[i][j] != strings[i][str_len-1-j] )
            //     {
            //         flag = 0;
            //         break;
            //     }
            // }
        }

        if(flag)
        {
            printf("%s\n",strings[i]);
        }
    }   
    return 0;
}