// Define a function to input variable length string and store it in an array without
// memory wastage.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>

int main()
{

    int charCount = 0 ; 
    char tempChar;

    char *ptrChar = NULL;

    printf("Enter the string :");
    

    while(true)
    {
        tempChar = getchar();

        if(tempChar == '\n')
        {
            break;
        }

        ptrChar = (char *)realloc(ptrChar, charCount * sizeof(char));
        *(ptrChar + charCount) = tempChar;
        charCount++;


    }

    ptrChar = (char *)realloc(ptrChar, charCount * sizeof(char));
    *(ptrChar + charCount) = '\0';

    // code to print all string
    printf("\nEntered string:");
    int i = 0;
    while(ptrChar[i])
    {
        printf("%c",ptrChar[i]);
        i++;
    }

    free(ptrChar);

    return 0;
}