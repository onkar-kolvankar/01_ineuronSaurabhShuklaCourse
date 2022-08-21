// Write a program in C to find the sum of the series 
// 1 ! / 1 + 2 ! / 2 + 3 ! / 3 + 4 ! / 4 + 5 ! / 5 using the function
// 1 + 1 + 2! + 3! + 4! =
#include<stdio.h>
int getFactSeriesSum(int) ;
int getFactorial(int);
int main(int argc, char const *argv[])
{
    int n ;
    printf("Enter number of terms of series you want sum of :");
    scanf("%d",&n);

    printf("Sum of series till %d terms = %d", n, getFactSeriesSum(n));
    return 0;
}
int getFactSeriesSum(int terms)
{
    int sum = 0;
    for (int i = 1; i <= terms; i++)
    {
        sum = sum + getFactorial(i) / i;
    }
    return sum;
}
int getFactorial(int x)
{
    int fact = 1;
    for(int i = 1 ; i<= x ; i++)
    {
        fact = fact * i;
    }
    return fact;
}

