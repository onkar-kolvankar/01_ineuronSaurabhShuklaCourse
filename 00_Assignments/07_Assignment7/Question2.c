// Write a program to print first N terms of Fibonacci series
// Fibonnacci series -> 0,1,1,2,3,5,8,13,21,34,...
#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, temp;
    printf("Enter the number of terms of fibonacci series :");
    scanf("%d",&num);

    // Method 1 - 
    printf("%d,%d",a,b);
    for(int i = 3 ; i<=num ; i++)
    {
        temp = a +b;
        printf(",%d",temp);
        a = b;
        b = temp;

    }
    
    return 0;
}