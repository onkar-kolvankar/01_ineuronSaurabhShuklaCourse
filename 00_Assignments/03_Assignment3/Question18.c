//  Write a program which takes the month number as an input and display number of 
// days in that month
// 1,3,5,7,8,10,12 = 31 days | 4,6,9,11 = 30 days | 2 = 28/29 days 
#include<stdio.h>
int main()
{
    int month;
    printf("Please enter the number of Month :");
    scanf("%d",&month);
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("There are 31 Days in this month.");
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("THere are 30 days in this month.");
    }
    else if(month == 2)
    {
        printf("There are 28 or 29 days in this month.");
    }
    else
    {
        printf("Please enter a valid month.");
    }
}