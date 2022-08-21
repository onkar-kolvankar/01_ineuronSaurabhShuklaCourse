// Write a program in C to find the square of any number using the function
#include<stdio.h>
int getSquare(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("%d^2 = %d",n,getSquare(n));
    return 0;
}
int getSquare(int x)
{
    return x*x;
}
