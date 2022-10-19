// Write a recursive function to print binary of a given decimal number

// PRATEEK SIR METHOD - Using AND and BITWISE OPERATORS
// - Performing AND Operation on any number gives you its L.S.B(Least Significant Bit) i.e its Last Digit of its Binary form
// - To remove its L.S.B from binary form you can perform RIGHT SHIFT OPERATION with shift val = 1.
// - Perform this two steps till value of N becomes 0
#include <stdio.h>

void getBinary(int);

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if(n==0)
        printf("0");
    else
        getBinary(n);
    return 0;
}
void getBinary(int num)
{
    if(num == 0)
        return;

    getBinary(num >> 1);
    printf("%d",num & 1);
}