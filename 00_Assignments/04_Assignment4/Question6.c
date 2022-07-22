// Write a program to print the first 10 even natural numbers
#include<stdio.h>
int main()
{
    int even = 2;
    for(int i = 1 ; i<=10 ; i++){
        printf("%d ",even);
        even += 2;
    }
    return 0;
    
}