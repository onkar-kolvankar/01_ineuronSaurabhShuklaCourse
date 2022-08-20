/*
Write a menu driven program with the following options : 
    a.Addition
    b.Subtraction
    c.Multiplication
    d.Division
    e.Exit
*/
/* CONCEPT -> fflush(stdin)
         - scanf() does not work right with taking character inputs.
       Whenever you try to take 'character' input with the scanf() ,you enter a character ex: 'd' then you press <Enter Key>
       what happens is that 'd' is stored in the char variable ex: choice, AND <Enter Key> is stored in the [buffer] of scanf()
       so when you have menu-driven program when switch runs once next time it runs it does not take input from user but takes input
       from the [buffer] which is <Enter Key> so none of case is run and default runs. After which in next time you can enter character value.
*/
#include<stdio.h>
int main()
{
    int a , b ;
    char choice;
    while(1)
    {
        printf("\nSelect what operation you want to perform :\na. Addition \nb. Sub \nc.Multiplication \nd. Division \ne. Exit\n");
        fflush(stdin);
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
