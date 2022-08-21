// Write a function to calculate HCF of two numbers.(TSRS)
#include <stdio.h>
int getHCF(int, int);

int main()
{
    int n1, n2;
    printf("Enter 2 nos :");
    scanf("%d %d", &n1, &n2);

    printf("HCF(%d,%d) = %d", n1, n2, getHCF(n1, n2));

    return 0;
}
int getHCF(int a , int b)
{
    if(a<b)
    {
        for(int i = a ; i>= 1 ; i--)
        {
            if( (a % i == 0) && (b%i == 0) )
            {
                return i;
            }
        }
    }
    else if(b<a)
    {
        for (int i = b; i >= 1; i--)
        {
            if ((a % i == 0) && (b % i == 0))
            {
                return i;
            }
        }
    }
    else
    {

    }
}
