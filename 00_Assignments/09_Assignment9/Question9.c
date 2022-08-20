// Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a even number :");
    scanf("%d",&num);

    switch(num%2)
    {
        case 0:         // Even number
            printf("\nUpper nearest odd number = %d",num+1);
            break;
        case 1:         // Odd number
            printf("\nUpper nearest odd number is = %d",num);
            
    }

    return 0;
}