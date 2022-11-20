#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter your name:");
    gets(name);

    printf("\nHello %s", name);

    return 0;
}