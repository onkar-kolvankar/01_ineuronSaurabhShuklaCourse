// Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int getSumFirstNatNos(int);
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    printf("SUm of first %d nat nos = %d", num, getSumFirstNatNos(num));
    return 0;
}
int getSumFirstNatNos(int n)
{
    if(n == 1)
        return 1;

    return n + getSumFirstNatNos(n - 1);
}
