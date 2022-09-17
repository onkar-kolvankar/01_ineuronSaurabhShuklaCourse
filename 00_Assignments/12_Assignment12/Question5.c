// Write a recursive function to print first N even natural numbers
// n-th term of even nat nos series = 2n
#include <stdio.h>
void printEvenNatNos(int);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    printEvenNatNos(n);
    return 0;
}
void printEvenNatNos(int x)
{
    if(x==1){
        printf("2,");
    }
    else{
        printEvenNatNos(x-1);
        printf("%d,",2*x);
    }
}