// Write a program to count digits in a given number
// 937489 -> digits = 6 , 4232 -> 4 , 45000032 -> 8 , 0003994 -> 4
#include<stdio.h>
int main()
{
    int n ,count = 0;
    printf("Enter a number :");
    scanf("%d",&n);

    // Here we use the / to get last digit and check if its result is 0 or not

    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("No of digits = %d",count);
    return 0;
}