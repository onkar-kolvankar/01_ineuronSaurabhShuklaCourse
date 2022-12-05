// Write a program in C to demonstrate how to handle the pointers in the program

#include<stdio.h>
int main()
{
    int a = 10,b=15;

    int *p,*q, **l,**m;

    p = &a;
    q = &b;

    l = &p;
    m = &q;

    printf("%d %d %d %d\n\n",a,b,&a,&b);
    printf("%d %d %d %d %d %d\n\n",p,q,*p,*q,&p,&q);
    printf("%d %d %d %d %d %d\n\n",l,m,*l,*m,**l,**m);


    
    return 0;
}