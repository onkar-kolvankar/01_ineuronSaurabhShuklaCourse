// Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int odd = 1;
    for(int i = 1;i <=10 ; i++)
    {
        printf("%d ",odd);
        odd += 2;
    }
    return 0;
    
}