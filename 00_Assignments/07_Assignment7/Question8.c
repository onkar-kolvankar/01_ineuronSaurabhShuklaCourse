// Write a program to find next Prime number of a given number
// n1 = 54 -> op=59 , n1 = 90 -> op = 97 , n1 = 71 -> op = 73 (Next Prime number we need to find)
#include<stdio.h>
#include<conio.h>
int main()
{
    int num , foundAns = 0 , factor_count;
    
    printf("Enter a number whose next prime number you want :");
    scanf("%d",&num);

    int i = num + 1;
    while(foundAns==0)
    {
        factor_count = 0;
        for(int j = 1 ; j<= i ; j++)
        {
            if( i % j == 0)
            {
                factor_count++;
            }
            if(factor_count > 2)
            {
                break;
            }
        }
        if(factor_count == 2)
        {
            printf("%d",i);
            foundAns = 1;
        }
        else{
            i++;
        }
    }

    return 0;
}