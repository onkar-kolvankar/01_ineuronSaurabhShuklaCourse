// Write a program to print the first N odd natural numbers
// n = 5 -> 1,3,5,7,9 ;     n=13 -> 1,3,5,7,9,11,13,15,17,19,21,23,25

#include<stdio.h>
int main()
{
    int n , odd = 1;
    printf("Enter how many n odd natural nos you want to display :");
    scanf("%d",&n);

    for(int i = 1; i<= n ; i++)
    {
        printf("%d ",odd);
        odd += 2;
    }

    return 0;
}