// Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int month ; 
    printf("Enter the number of month to find how many days it has :");
    scanf("%d",&month);

    switch (month)
    {
        case 1 :
            printf("\n31 Days");
            break;
        case 2:
            printf("\n28/29 Days");
            break;
        case 3:
            printf("\n31 Days");
            break;
        case 4:
            printf("\n30 Days");
            break;

        case 5:
            printf("\n31 Days");
            break;
        case 6:
            printf("\n30 Days");
            break;
        case 7:
            printf("\n31 Days");
            break;
        case 8:
            printf("\n31 Days");
            break;
        case 9:
            printf("\n30 Days");
            break;
        case 10:
            printf("\n31 Days");
            break;
        case 11:
            printf("\n30 Days");
            break;
        case 12:
            printf("\n31 Days");
            break;
        default:
            printf("\nPlease enter valid month"); 

    }
    return 0;
}
