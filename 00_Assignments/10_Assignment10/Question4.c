// Write a function to print first N natural numbers(TSRN)
#include<stdio.h>
void printNat(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printNat(n);
    return 0;
}
void printNat(int x)
{
    for(int i = 1 ; i<= x ; i++ )
    {
        printf("%d ",i);
    }
}
