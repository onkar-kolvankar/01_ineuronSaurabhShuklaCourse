// Write a C program to sort a string array in ascending order

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20] = "Onkar kolvankar" ,temp;

    int isSwapped ,string_length;

    strlwr(str);
    printf("%s",str);

    for(string_length =  0 ; str[string_length] ;string_length++ );

    printf("\n%d\n",string_length);

    for(int i = 0 ; i <= string_length - 2 ; i++)
    {
        // isSwapped = 0;
        for(int j = i + 1 ; str[j] ; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;

                // isSwapped = 1;
            }
        }
    }

    printf("%s" ,str);
    

    return 0;
}