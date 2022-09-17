// Write a recursive function to print first N natural numbers
#include<stdio.h>
void printFirstNatNos(int) ;
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printFirstNatNos(n);
    return 0;
}
void printFirstNatNos(int x)
{
    if(x <= 1)
    {
        printf("%d,",x);
    }
    else
    {
        printFirstNatNos(x-1);
        printf("%d,",x);
    }
}
