// Write a program to print the first N odd natural numbers in reverse order
// n = 5 -> 9,7,5,3,1 ;     n=13 -> 25,23,21,19,17,15,13,11,9,7,5,3,1
// Formula for fist no in sequence = n*2 - 1
#include <stdio.h>
int main()
{
    int n , odd;
    printf("Enter how many n odd natural nos you want to display :");
    scanf("%d", &n);

    odd = n*2 -1;

    for (int i = 1 ; i<=n ; i++)
    {
        printf("%d ", odd);
        odd -= 2;
    }
    return 0;
}