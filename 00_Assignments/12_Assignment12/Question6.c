// Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void printEvenNatNosRev(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printEvenNatNosRev(n);
    return 0;
}
void printEvenNatNosRev(int x)
{
    if(x==1){
        printf("2");
    }
    else{
        printf("%d,", 2 * x);
        printEvenNatNosRev(x - 1);
        
    }
}