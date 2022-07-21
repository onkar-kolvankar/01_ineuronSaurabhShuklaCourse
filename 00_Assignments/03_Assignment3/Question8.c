#include<stdio.h>
// Write a program to check whether a given year is a leap year or not.
// LOGIC - Every year divisible by 4 is Leap year 
//              - EXCEPT IF that is divisible by 100 then 
//                  - EXCEPT IF that year is divisible by 400 then it is leap year 
//                  - IF NOT divisible by 400 then it is not leap year

int main()
{
    int year;
    printf("Enter a year :");
    scanf("%d",&year);

    if(year % 4 == 0){
        // check if it is divisible by 100
        if(year % 100 == 0)
        {
            // check if it is divisible by 400
            if (year % 400 == 0)
            {   
                // if divisible by 4, 100 , 400 then it is Leap year
                printf("%d is a LEAP YEAR",year);
            }
            else
            {
                // if divisible by 4,100 but Not with 400 then it is NOT Leap year
                printf("%d is NOT A LEAP YEAR.",year);
            }
        } 
        else
        {
            // if divisible by 4 but not by 100 then definetly a Leap year.
            printf("%d is LEAP YEAR.",year);
        }
    }
    else
    {
        // if not divisible by 4 itself then it is Not a Leap year.
        printf("%d is NOT A LEAP YEAR.",year);
    }
    return 0;
}