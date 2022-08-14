// Write a program to check whether a given number is an even number or an odd number without using % operator
// 0 -> even 

#include<stdio.h>
int main()
{
    int num , quotient;
    printf("enter number: ");
    scanf("%d",&num);

    // Method 1 - by checking if it is divisible by 2

    quotient = num / 2;
    num - quotient * 2 == 0 ? printf("%d is Even",num) : printf("%d is Odd",num);

    // Method 2 - Using Bit wise operator.
    // (1)base 10 = (00000001)base2     <- KEY
    // So if you do BITWISE AND i.e & with any number then if that number is odd i.e has 1 at last digit
    // then only result will be 1(Odd) otherwise result will be 0(Even)
    // Ex : 7 -> 111 , 1 -> 001 => 7 & 1 => 111 & 001 = 001 -> 1(Odd)
    // 8 -> 1000 , 1 -> 0001 , -> 8 & 1 => 1000 & 0001 -> 0(Even)
    if(num & 1)
        printf("\nOdd number");
    else
        printf("\nEven number");

    return 0;
}