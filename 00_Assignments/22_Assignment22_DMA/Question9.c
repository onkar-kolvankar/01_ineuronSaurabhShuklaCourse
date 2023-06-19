//  Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int noOfBytes;
    int *ptr = NULL;

    printf("Enter the no of bytes to allocate:");
    scanf("%d",&noOfBytes);

    

    ptr = (int *)malloc(noOfBytes);

    if(ptr == NULL)
        printf("Memory not allocated.");
    else
    {
        printf("Memory allocated.");

        // take input.
    }

    free(ptr);
        

    


    return 0;
}