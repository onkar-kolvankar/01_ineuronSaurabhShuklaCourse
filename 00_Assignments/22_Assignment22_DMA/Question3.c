// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,sum;
    int *ptr;
    printf("Enter the number of numbers:");
    scanf("%d",&n);

    ptr = (int *)malloc(n * sizeof(int));

    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d",ptr + i);
    }

    for(int i = 0 ; i < n ; i++)
    {
        sum += (ptr[i]);
    }

    printf("\nSum = %d",sum);

    free(ptr);


    return 0;
}