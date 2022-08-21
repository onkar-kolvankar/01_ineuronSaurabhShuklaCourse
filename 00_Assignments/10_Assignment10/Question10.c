// Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void printPrimeFactors(int) ;
int checkPrimeNo(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    printPrimeFactors(n);
    return 0;
}
void printPrimeFactors(int x)
{
    while(x>1)
    {
        for (int j = 2; j <= x ; j++)
        {
            if (checkPrimeNo(j) == 0) // j = prime
            {
                if (x % j == 0)
                {
                    printf("%d ", j);
                    x = x / j;
                    break;
                }
            }
        }
    }
    
}
int checkPrimeNo(int num)
{
    int flag = 0;           // flag = 0 -> Prime nos
    for(int i = 2 ; i<= num/2 ; i++)
    {
        if(num/i==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
