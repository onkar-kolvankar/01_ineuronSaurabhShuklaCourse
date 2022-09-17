// Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void printNatNosRev(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    printNatNosRev(n);
    return 0;
}
void printNatNosRev(int x)
{
    if(x <= 1){
        printf("1");
    }
    else{
        printf("%d,",x);
        printNatNosRev(x-1);
    }
}