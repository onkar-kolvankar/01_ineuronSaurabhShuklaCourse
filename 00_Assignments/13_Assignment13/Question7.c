// Write a recursive function to calculate HCF of two numbers
// METHOD 1 - Euclid's HCF Theorem (Saurabh Sir Logic)
// HCF(245,125) = HCF(245 % 125 , 125) = HCF(120 , 125) = HCF(120 , 125 % 120) = HCF(120 , 5) 
// => 120 % 5 == 0 therefore hcf = 5 

#include<stdio.h>

int getHCF(int a , int b)
{
    if(a>b && a%b == 0)
        return b;
    else if (b>a && b%a == 0)
    {
        return a;
    }

    if(a>b)
        return getHCF(a % b, b);
    else                                    // b > a
        return getHCF(a, b % a);
}

int main()
{
    int n1, n2;
    printf("Enter 2 nos to get their HCF :");
    scanf("%d %d", &n1, &n2);

    if(n1==n2)
        printf("HCF(%d,%d) = %d", n1, n2, n1);
    else
        printf("HCF(%d,%d) = %d",n1,n2,getHCF(n1,n2));
    
    return 0;
}