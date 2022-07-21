// Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.
// 
#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5 , per;
    printf("Enter the marks of 5 subjects :");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);

    per = (m1+m2+m3+m4+m5)/5;

    if(m1 >=0 && m2 >= 0 && m3 >= 0 && m4 >= 0 && m5 >= 0)
    {
        if(per < 33)
        {
            printf("Students total percentage = %f and he is FAIL",per);
        }
        else
        {
            printf("Students percentage = %f and he is PASS",per);
        }
    }
    else
    {
        printf("Marks cannot be less than 0");
    }

    

    return 0;
}