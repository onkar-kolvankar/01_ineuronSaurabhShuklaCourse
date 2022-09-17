// Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int getFactorial(int);
int main()
{
    int num;
    printf("Enter a number to get its factorial :");
    scanf("%d", &num);

    printf("%d! = %d" , num,getFactorial(num));
    return 0;
}
int getFactorial(int n)
{
    if(n == 1)
        return 1;
    return n * getFactorial(n - 1);
}