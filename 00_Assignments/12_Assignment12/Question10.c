// Write a recursive function to print reverse of a given number
#include <stdio.h>
#include<stdlib.h>
void printReverse(int);
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    printReverse(num);
    return 0;
}
void printReverse(int n)
{
    if(n==0)
        exit(0);

    printf("%d", n % 10);
    printReverse(n / 10);
    
}