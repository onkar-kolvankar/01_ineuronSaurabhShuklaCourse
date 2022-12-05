//  Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>
int getMax(int *,int *);
int main()
{
    int a = 15 , b = 10;

    printf("Max Number = %d",getMax(&a,&b));


    
    return 0;
}
int getMax(int *p,int *q)
{
    if(*p > *q)
        return *p;
    else
        return *q;
}