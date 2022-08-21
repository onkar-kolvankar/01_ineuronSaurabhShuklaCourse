// Write a function to print first N prime numbers(TSRN)
#include<stdio.h>
void printPrimeNos(int) ;
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printPrimeNos(n);

    return 0;
}
void printPrimeNos(int x)
{
    int flag;
    for (int num = 2; num <= x; num++)
    {
        flag = 0;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d ",num);
        }
    }
}

