/*
Write a menu driven program with the following options : 
    a.Check whether a given set of three numbers are lengths of an isosceles triangle or not 
    b.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not 
    c.Check whether a given set of three numbers are equilateral triangle or not 
    d.Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1 , n2 , n3;
    char choice;

    while(1)
    {
        printf("Select what operation you want to perform:\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not.\n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("c. Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("d. Exit\n");

        scanf("%c", &choice);

        switch (choice)
        {
            case 'a':
                printf("Enter 3 sides:");
                scanf("%d %d %d", &n1, &n2, &n3);

                if (n1 == n2 || n1 == n3 || n2 == n3)
                {
                    printf("\nIsoceles Triangle");
                }
                else
                {
                    printf("\nNot Isoceles Triangle");
                }
                break;

            case 'b':
                printf("Enter 3 sides:");
                scanf("%d %d %d", &n1, &n2, &n3);

                if (n1 * n1 == n2 * n2 + n3 * n3 || n2 * n2 == n1 * n1 + n3 * n3 || n3 * n3 == n1 * n1 + n2 * n2)
                {
                    printf("\nRight Angle Triangle.");
                }
                else
                {
                    printf("Not Right Angle Triangle");
                }
                break;

            case 'c':
                printf("Enter 3 sides:");
                scanf("%d %d %d", &n1, &n2, &n3);

                if (n1 == n2 && n2 == n3)
                {
                    printf("\nEquilateral Triangle");
                }
                else
                {
                    printf("\nNot Equilateral Triangle");
                }
                break;
            case 'd':
                exit(0);
        }

    } 
    return 0;
}