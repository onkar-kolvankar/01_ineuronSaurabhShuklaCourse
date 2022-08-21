// Write a function to check whether a given number is Prime or not .(TSRS)
#include<stdio.h>
int checkPrime(int) ;
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(checkPrime(n)==0)
        printf("Prime number.");
    else
        printf("Non - Prime Number");
    return 0;
}
int checkPrime(int x)
{
    int flag = 0;   // flag = 0 => prime
    for(int i = 2 ; i<= x/2 ; i++)
    {
        if(x%i==0)
        {
            flag = 1;
            return flag;
        }
            
    }
    return flag;
}
