// Write a prg to cal length of string.
#include<stdio.h>
int main()
{
    char name[20] = "Onkar Kolvankar";
    
    // Method 1
    int count = 0 ; 
    for(int i = 0 ; name[i] != '\0' ; i++)
    {
        count++;
    }
    printf("Length of string = %d", count);

    // Method 2 - Instead of creating another count variable we use iterative variable i to count.
    int i = 0;
    for (i = 0; name[i];i++);

    printf("\nLength of string = %d", i);

    return 0;
}