// Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{   
    int n , even_nat = 2;
    printf("Enter how many even natural nos you want to display :");
    scanf("%d",&n);

    for(int i =1; i<= n;i++){
        printf("%d ",even_nat);
        even_nat += 2;
    }

    return 0;
}