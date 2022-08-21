// Write a function to calculate the factorial of a number.(TSRS)
#include<stdio.h>
int getFactorial(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printf("\n%d! = %d",n,getFactorial(n));
    return 0;
}
int getFactorial(int x)
{
    int prod = 1;
    for(int i = 1 ; i <= x ; i++)
    {
        prod = prod * i;
    }
    return prod;

}

