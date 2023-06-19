// Write a program to input and print text using dynamic memory allocation
// NOTE - No need to use the malloc() before using realloc().
// Can use the realloc() function directly.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{
    int charCount = 0;
    char tempChar;

    char *ptrChar = NULL;
    printf("Enter the text :");

    while(true)
    {
        tempChar = getchar();
        if(tempChar == '\n')
        {
            break;
        }
        
        // printf("\nEntered character :%c",tempChar);
        
        ptrChar = (char *)realloc(ptrChar, (charCount) * sizeof(char));

        *(ptrChar + charCount) = tempChar;

        charCount++;    

    }

    ptrChar = (char *)realloc(ptrChar, charCount * sizeof(char));
    *(ptrChar + charCount) = '\0';

    // print the string.
    printf("\nEntered text = ");
    int i = 0;
    while(ptrChar[i])
    {
        // printf("\n i = %d => %c",i,ptrChar[i]);
        printf("%c",ptrChar[i]);
        i++;
    }

    // printf("\n i = %d => %c",0,*ptrChar);

    free(ptrChar);
    return 0;
}