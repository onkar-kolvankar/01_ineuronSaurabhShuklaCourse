// Write a function to print first N terms of Fibonacci series(TSRN)
// 1,1,2,3,5,8,13,21,34,
#include<stdio.h>
void printFibonnacci(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of terms of Fibonnacci series you want :");
    scanf("%d",&n);

    printFibonnacci(n);
    return 0;
}
void printFibonnacci(int x)
{
    int prev = 1, current = 1 , next ,sum;
    if(x==1)
    {
        printf("1");
    }
    else if(x==2)
    {
        printf("1,1");
    }
    else
    {
        printf("1,1,");
        for (int i = 3; i <= x; i++)
        {
            next = prev + current;
            prev = current;
            current = next;
            printf("%d,",current);
        }
    }
    
}
