// Program to check whether a year is a leap year or not .Using switch statement
// LOGIC 1- IF year divisible by 4 then -
//                    IF divisible by 100 -
//                            IF divisible by 400 then leap year
//                            ELSE not leap year
//                    ELSE leap year
//         ELSE not leap year
// LOGIC 2- CENTURY YEAR (Div by 100)-
//                 if divisible by 400 -> L.Y
//                     not divisible by 400 -> N.L.Y
//          NON CENTURY YEAR (not div by 400)
//                 if divisible by 4 -> L.Y 
//                     not divisible by 4 -> N.L.Y
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);

    switch(year % 100 == 0)
    {
        case 1:
            // Code for Century Year
            switch(year % 400 == 0)
            {
                case 1: // L.Y
                    printf("%d is a Leap Year",year);
                    break;
                case 0: // N.L.Y
                    printf("%d is Not a Leap Year",year);
                    break;
            }
            break;

        case 0:
            // Code for Non Century Year
            switch(year % 4 == 0)
            {
                case 1: // L.Y
                    printf("%d is a Leap Year",year);
                    break;
                case 0: // N.L.Y
                    printf("%d is Not Leap Year",year);
                    break;
            }
            break;
    }

    return 0;
}