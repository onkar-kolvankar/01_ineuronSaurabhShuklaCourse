// Write a program to print all Prime numbers between two given numbers
// n1 = 4 , n2 = 72 , -> 5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71
#include<stdio.h>
int main()
{
    int n1,n2 , factor_count;
    printf("Enter two numbers between which you want to get prime numbers :");
    scanf("%d %d",&n1 ,&n2);

    for(int i = n1 ; i <= n2 ; i++)
    {
        factor_count = 0;
        for(int j = 1 ; j <= i ; j++)
        {
            if( i % j == 0)
            {
                factor_count++;
            }
            if(factor_count > 2)
                break;
        }
        if(factor_count == 2)
        {
            printf("%d  ",i);
        }
        // else if(factor_count > 2)
        // {
        //     continue;
        // }
    }
    return 0;
}