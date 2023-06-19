// Write a program to input and print text using dynamic memory allocation
// WAY 2 = BETTER THAN THIS.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{
    int charCount = 0;
    char tempChar;

    char *ptrChar = NULL;
    printf("Enter the text :");

    ptrChar = (char *)malloc(sizeof(char));

    while(true)
    {
        tempChar = getchar();
        if(tempChar == '\n')
        {
            break;
        }
        // (tempChar = getchar()) != '\n'

        charCount++;
        printf("\nEntered character :%c",tempChar);
        
        ptrChar = (char *)realloc(ptrChar, charCount * sizeof(char));

        *(ptrChar + charCount) = tempChar;

        
        

    }

    charCount++;
    ptrChar = (char *)realloc(ptrChar, charCount * sizeof(char));
    *(ptrChar + charCount) = '\0';

    

    // print the string.
    
    int i = 1;
    while(ptrChar[i])
    {
        printf("\n i = %d => %c",i,ptrChar[i]);
        i++;
    }

    printf("\n i = %d => %c",0,*ptrChar);

    free(ptrChar);
    return 0;
}