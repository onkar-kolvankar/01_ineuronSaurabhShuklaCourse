// Write a program which takes the length of the sides of a triangle as an input. Display 
// whether the triangle is valid or not.
// 
#include<stdio.h>
int main()
{
    int s1 , s2 , s3;
    printf("Enter 3 sides of triangle : ");
    scanf("%d %d %d",&s1,&s2,&s3);

    if(s1 + s2 > s3)
    {
        if(s2 + s3 > s1)
        {
            if(s1 + s3 > s2)
            {
                printf("It is valid Trianagle.");
            }
        }
        else
        {
            printf("These are not valid sides of triangle.");
        }
        
    }
    else 
    {
        printf("These are not valid sides of triangle");
    }
    return 0;
}