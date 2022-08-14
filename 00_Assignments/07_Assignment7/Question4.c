// Write a program to calculate HCF of two numbers
// a*b = LCM(a,b) * HCF(a,b)
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers to find HCF :");
    scanf("%d %d",&a,&b);

    if(a<b)
    {
        for (int i = a ; i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("HCF(%d %d) = %d",a,b,i);
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
                printf("HCF(%d %d) = %d", a, b, i);
                break;
            }
        }
    }
    else        // When both numbers are same HCF(15,15) = 15
    {
        printf("HCF(%d %d) = %d", a, b, a);
    }
    return 0;
}
