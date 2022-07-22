#include<stdio.h>
int main()
{
    int sum = 0 , num;

    do
    {
        printf("Enter a number to add :");
        scanf("%d",&num);

        sum += num;

    }while(num != 0);

    printf("SUM = %d",sum);

    return 0;
}
