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
        printf("\nSelect what operation you want to perform:");
        printf("\na. Check whether a given set of three numbers are lengths of an isosceles triangle or not.");
        printf("\nb. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\nc. Check whether a given set of three numbers are equilateral triangle or not");
        printf("\nd. Exit\n");

        /* CONCEPT -> fflush(stdin)
          - scanf() does not work right with taking character inputs.
        Whenever you try to take 'character' input with the scanf() ,you enter a character ex: 'd' then you press <Enter Key>
        what happens is that 'd' is stored in the char variable ex: choice, AND <Enter Key> is stored in the [buffer] of scanf()
        so when you have menu-driven program when switch runs once next time it runs it does not take input from user but takes input 
        from the [buffer] which is <Enter Key> so none of case is run and default runs. After which in next time you can enter character value.
        */
        
        
        fflush(stdin);
        scanf("%c", &choice);

        switch (choice)
        {
            case 'a':
                printf("\nEnter 3 sides:");
                scanf("%d %d %d", &n1, &n2, &n3);
                
                // Two sides must be equal but 3rd side Must Not be equal.
                if ((n1 == n2 && n1 != n3) || (n1 == n3 && n1 != n2) || (n2 == n3 && n2 != n1))
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

                if (n1 == n2 && n2 == n3)       // COMMOM MISTAKE - if(n1==n2==n3)   THIS IS WRONG
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