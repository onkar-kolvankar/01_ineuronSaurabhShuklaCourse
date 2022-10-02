// Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int getFibNthNum(int);          // This function return Nth term of the fiboancci series
                                // So use for loop in main() to get every term.

int main()
{
    int num ;
    printf("Enter number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        printf("%d ,", getFibNthNum(i));

    return 0;
}
int getFibNthNum(int n)
{
    if(n == 0 || n == 1)
        return n;
    return getFibNthNum(n - 1) + getFibNthNum(n - 2);
}