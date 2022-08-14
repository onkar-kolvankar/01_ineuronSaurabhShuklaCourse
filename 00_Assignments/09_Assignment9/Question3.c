// Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include <stdio.h>
int main()
{
    int x;

    printf("Please enter day number of a week :\n");

    scanf("%d", &x);

    switch (x)
    {
        case 1:
            printf("It's Monday\n");
            break;
        case 2:
            printf("It's Tuesday.\n");
            break;
        case 3:
            printf("It's wednesday.\n");
            break;
        case 4:
            printf("It's Thrusday.\n");
            break;
        case 5:
            printf("It's Friday.\n");
            break;
        case 6:
            printf("It's Saturday.\n");
            break;
        case 7:
            printf("It's Sunday.\n");
            break;
        default:
            printf("Please enter a valid day!!");
    }

    return 0;
}