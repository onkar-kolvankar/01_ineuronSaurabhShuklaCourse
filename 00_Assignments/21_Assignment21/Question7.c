// Write a program to calculate the difference between two time periods
// Time Difference: 13:34:55 - 8:12:15 = 5:22:40

#include<stdio.h>
#include<math.h>

struct MyTime
{
    int hour,minute,second;
};

int main()
{
    struct MyTime m1,m2,timeDiff;
    int sec1,sec2,diffSec;

    printf("\nEnter Time for 1st Time Period in HH:MM:SS format:");
    scanf("%d:%d:%d",&m1.hour,&m1.minute,&m1.second);
    fflush(stdin);

    printf("\nEnter Time for 2nd Time Period in HH:MM:SS format:");
    scanf("%d:%d:%d",&m2.hour,&m2.minute,&m2.second);
    fflush(stdin);

    // calculate total seconds for both.
    sec1 = m1.hour * 60 * 60 + m1.minute * 60 + m1.second;
    sec2 = m2.hour * 60 * 60 + m2.minute * 60 + m2.second;

    // subtract the seconds from each other
    if(sec1 > sec2)
        diffSec = sec1 - sec2;
    else if(sec2 > sec1)
        diffSec = sec2 - sec1;
    else 
        diffSec = 0;

    // convert the seconds to the HH:MM:SS format
    timeDiff.hour = diffSec / 3600;
    timeDiff.minute = (diffSec % 3600) / 60;
    timeDiff.second = ((diffSec % 3600) % 60);

    printf("\nTIME DIFF  =  %d:%d:%d",timeDiff.hour,timeDiff.minute,timeDiff.second);



    return 0;
}