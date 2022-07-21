// Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.
// 
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers to compare :");
    scanf("%d %d %d",&n1 ,&n2 ,&n3);

    if(n1 >= n2 && n1 >= n3)
    {
        printf("%d is the Greatest number.\n",n1);
        if(n1 == n2)
        {
            printf("%d",n1);
        }
        else if(n1==n3)
        {
            printf("%d",n1);
        }
    }
    else if(n2 >= n1 && n2 >= n3)
    {
        printf("%d is the Greatest number.\n",n2);
        if(n2 == n1)
        {
            printf("%d",n2);
        }
        else if(n2==n3)
        {
            printf("%d",n2);
        }
    }
    else if(n3 >= n1 && n3 >= n2)
    {
        printf("%d is the Greatest number.\n",n3);
        if(n3 == n1)
        {
            printf("%d",n3);
        }
        else if(n3==n2)
        {
            printf("%d",n3);
        }
    }
    return 0;
}