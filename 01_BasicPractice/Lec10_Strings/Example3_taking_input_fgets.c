#include<stdio.h>
#include<string.h>

int main()
{
    char name[10];

    fgets(name,10,stdin);

    printf(" %d ",strlen(name));    // fgets() - length of string will be +1 as it 
    // takes newline character as input also.

    return 0;
}