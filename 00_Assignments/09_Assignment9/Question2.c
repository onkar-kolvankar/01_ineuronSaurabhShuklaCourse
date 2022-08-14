/*
Write a menu driven program with the following options : 
    a.Addition
    b.Subtraction
    c.Multiplication
    d.Division
    e.Exit
*/
#include<stdio.h>
int main()
{
    int a , b ;
    char choice;
    while(1)
    {
        printf("\nSelect what operation you want to perform :\na. Addition \nb. Sub \nc.Multiplication \nd. Division \ne. Exit\n");
        scanf("%c", &choice);
        switch (choice)
        {
            case 'a':
                printf("\nEnter two numbers :");
                scanf("%d %d", &a, &b);
                printf("Sum = %d", a + b);
                break;
            case 'b':
                printf("\nEnter two numbers :");
                scanf("%d %d", &a, &b);
                printf("Sub = %d", a - b);
                break;
            case 'c':
                printf("\nEnter two numbers :");
                scanf("%d %d", &a, &b);
                printf("Multiplication = %d", a * b);
                break;
            case 'd':
                printf("\nEnter two numbers :");
                scanf("%d %d", &a, &b);
                printf("Division = %d", a / b);
                break;
            case 'e':
                break;
            default:
                printf("\nPlease select choices from above.");
        }
        if(choice == 'e')
        {
            break;
        }
    }
    return 0;
}
