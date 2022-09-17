// Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
#include<math.h>
int getHCF(int, int);
int main()
{
    int num1 , num2;
    printf("Enter two numbers to get its HCF :");
    scanf("%d %d", &num1 , &num2);

    printf("HCF(%d,%d) = %d", num1 , num2, getHCF(num1,num2));
    return 0;
}
int getHCF(int a , int b)
{
    
}