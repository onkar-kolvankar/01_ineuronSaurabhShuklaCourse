// Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int odd = 19;
    for(int i = 1 ; i<=10 ; i++){
        printf("%d ",odd);
        odd -= 2;
    }
    return 0;
    
}