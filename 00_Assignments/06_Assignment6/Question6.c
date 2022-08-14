// Write a program to calculate factorial of a number
// 4! = 4 * 3 * 2 * 1 = 24 

#include<stdio.h>
int main()
{
    int n , prod =1;
    printf("Enter a number to get factorial :");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Factorial of negative number is NOT DEFINED.");
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            prod = prod * i;
        }
        printf("%d! = %d", n, prod);
    }
    
    return 0;

}