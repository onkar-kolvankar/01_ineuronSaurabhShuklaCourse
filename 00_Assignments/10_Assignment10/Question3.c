// Write a function to check whether a given number is even or odd.Return 1 if the number is even,
// otherwise return 0.(TSRS)
#include<stdio.h>
int checkEvenOdd(int);

int main(int argc, char const *argv[])
{
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("Result = %d",checkEvenOdd(n));

    return 0;
}

int checkEvenOdd(int x)
{
    if(x%2 == 0)
        return 1;
    else
        return 0;
}
