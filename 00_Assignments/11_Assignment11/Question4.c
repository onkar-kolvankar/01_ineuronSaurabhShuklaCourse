// Write a function to find the next prime number of a given number.(TSRS)
#include <stdio.h>
int nextPrime(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("Next prime number = %d",nextPrime(n));
    return 0;
}
int nextPrime(int x)
{
    int flag;
    for(int i = x + 1 ; 1 ; i++)
    {
        flag = 0;
        for(int j = 2 ; j<= i/2 ; j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            return i;
        }
            
    }
}