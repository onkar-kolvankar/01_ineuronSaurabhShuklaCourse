// WAP to print “%d” on the screen.
// WAP to print “\n” on the screen.
// WAP to print “\\” on the screen.

#include<stdio.h>
int main()
{
    printf("\"%%d\"");
    printf("\n");

    printf("\"%c%c\"",'%','d');
    printf("\n");
    
    printf("\"\\n\"");
    printf("\n");
    
    printf("\"\\\\\"");
    printf("\n");
    
    return 0;
}