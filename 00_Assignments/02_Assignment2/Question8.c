// Write a program to check whether the given number is even or odd using a bitwise operator
// 1 -> 00000001 In Binary 
// 5 in Decimal -> 101 in Binary , 6 in Decimal -> 110 in Binary
// If you apply AND Operation on 5 (odd number )and 1 ,it gives Result = 1.
// If you apply AND Operation on 6 (Even number) and 1 ,it gives Result = 0. 
#include<stdio.h>
int main()
{
    int num, isOdd;
    printf("Enter a number :");
    scanf("%d",&num);

    isOdd = num & 1;    // isOdd variable stores result of the Bitwise AND operation i.e 0(for Even) or 1(for Odd).

    if(isOdd == 1)
    {
        printf("%d is a ODD Number",num);
    }
    else
    {
        printf("%d is EVEN Number",num);
    }
    
    return 0;
}