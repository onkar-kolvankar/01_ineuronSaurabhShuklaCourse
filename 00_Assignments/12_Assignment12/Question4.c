// Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void printOddNatNosRev(int) ;
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printOddNatNosRev(n);
     return 0;
}
void printOddNatNosRev(int x)
{
    if (x == 1)
    {
        printf("1");
    }
    else
    {
        printf("%d,", 2 * x - 1);
        printOddNatNosRev(x - 1);
    }
}