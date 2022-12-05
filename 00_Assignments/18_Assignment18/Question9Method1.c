// Write a function to reverse a string word wise. (For example if the given string is 
// “Mysirg Education Services” then the resulting string should be “Services Education 
// Mysirg” )

/*  METHOD -1 [BRUTE FORCE]
    - Here we are taking two pointers 'start' and 'end' which will mark the positions of words
      that where they are starting and ending and then we will store that word in another array.

    MINOR ISSUE - getting sometimes 'N' or '#' etc symbols at the end of string. in output.
*/

#include<stdio.h>
#include<string.h>

void revStringWordWise(char str[],int string_size)
{
    int start = string_size-1 , end = string_size-1 ,is_space = 1;
    char temp_str[string_size] ;
    int temp_str_counter = 0;

    for(;start >= 0 ; start--)
    {
        if(str[start] == ' ')
        {
            if(is_space == 1)
            {
                end = start;
            }
            else
            {
                if(str[end] != ' ')
                {
                    // Code to print / store the word in array 
                    for(int i = start + 1 ; i <= end ; i++)
                    {
                        // printf("%c",str[i]);
                        temp_str[temp_str_counter] = str[i];
                        temp_str_counter++;
                    }
                    // printf(" ");
                    temp_str[temp_str_counter] = ' ';
                    temp_str_counter++;
                }
                else
                {
                    // Code to print / store the word in array 
                    for(int i = start + 1 ; i < end ; i++)
                    {
                        // printf("%c",str[i]);
                        temp_str[temp_str_counter] = str[i];
                        temp_str_counter++;
                    }
                    // printf(" ");
                    temp_str[temp_str_counter] = ' ';
                    temp_str_counter++;
                }
                end = start;
            }
            // Deletet it
            is_space = 1;
        }
        else
        {
            is_space = 0;
        }

        if(start== 0 && str[start] != ' ')
        {    // code to print or save first word
            for(int i = start ; i < end ; i++)
            {
                // printf("%c",str[i]);
                temp_str[temp_str_counter] = str[i];
                temp_str_counter++;
            }
            end = start;
        }
    }
    // copy elements from temp string array to original array.
    for(int m = 0 ; str[m] ; m++)
    { str[m] = 0;}

    strcpy(str,temp_str);
}

int main()
{
    char str[40] = "Onkar is in mca";
    int str_size;
    for(str_size = 0 ; str[str_size] ; str_size++);

    revStringWordWise(str,str_size);

    printf("%s",str);

    return 0;
}
