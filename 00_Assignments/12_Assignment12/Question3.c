// Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void printOddNatNos(int) ;
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printOddNatNos(n);
    return 0;
}
void printOddNatNos(int n)
{
    if(n<=1)
    {
        printf("%d,",2*n-1);
    }
    else{
        printOddNatNos(n-1);
        printf("%d,",2*n-1);
    }
}