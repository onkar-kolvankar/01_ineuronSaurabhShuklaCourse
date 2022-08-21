// Write a function to print first N odd natural numbers.(TSRN)
#include<stdio.h>
void printFirstOddNat(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printFirstOddNat(n);

    return 0;
}
void printFirstOddNat(int x)
{
    int count = 1;
    for(int i = 1 ; i <= x ; i++)
    {
        printf("%d ",count);
        count = count + 2;
    }
}

