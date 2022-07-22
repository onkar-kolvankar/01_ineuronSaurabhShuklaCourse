// Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter number of times you want to print MySirG :");
    scanf("%d",&n);

    for(int i = 1;i<=n ; i++){
        printf("MySirG ");
    }

    return 0;
}