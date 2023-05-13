#include<stdio.h>
#include<string.h>
int getIntOfChar(char);
int main()
{

    char a = '9';

    printf("\n%d",getIntOfChar(a));


    return 0;
}
int getIntOfChar(char c)
{
    // 0 - 48 , 9 - 57
    return (int)c - 48;
}