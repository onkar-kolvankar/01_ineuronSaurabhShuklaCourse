// Lec - 9 
// WAP to enter 10 nos in array and print sum of only even and odd nos separately.
#include<stdio.h>

int main()
{
    int nos[10],sum_even = 0 , sum_odd = 0;
    printf("Enter 10 numbers :");

    for (int i = 0; i<= 9 ; i++)
        scanf("%d ",&nos[i]);
    
    for(int i = 0 ; i<= 9 ; i++)
    {
        if(nos[i] % 2 == 0)
            sum_even += nos[i];
        else
            sum_odd += nos[i];
    }

    printf("Sum Even = %d  ||  Sum odd  = %d", sum_even, sum_odd);
    return 0;
}