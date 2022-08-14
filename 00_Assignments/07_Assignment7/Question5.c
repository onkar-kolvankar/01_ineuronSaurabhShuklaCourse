// Write a program to check whether two given numbers are co - prime numbers or not
// My method - HCF(a,b) = 1
// (4,7) or (26,49) are co primes
#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter 2 numbers :");
    scanf("%d %d",&a,&b);

    // METHOD 1 (MY WAY)
    // I use if else to reduce useless checking 
    // HCF(14,72) -> Max value of HCF could be 14 and Least value could be 1 so I don't check values greater than 14.
    // LCM(14,72) -> Max value of LCM could be 14*72 and Least value of lcm could be 14.
    if(a<b)
    {
        for(int i = a ; i>= 1 ; i--)
        {
            if(a%i==0 && b%i == 0)
            {
                if(i==1)
                {
                    printf("%d and %d are CO-PRIMES.",a,b);
                }
                else
                {
                    printf("%d and %d are NOT CO-PRIMES.",a,b);
                }
                break;
            }
        }
    }
    else if(b<a)
    {
        for (int i = b; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                if (i == 1)
                {
                    printf("%d and %d are CO-PRIMES.", a, b);
                }
                else
                {
                    printf("%d and %d are NOT CO-PRIMES.", a, b);
                }
                break;
            }
        }
    }
    else    // when both number are same. They are not co primes
    {
        printf("%d and %d are NOT CO-PRIMES.");
    }
    return 0;

}