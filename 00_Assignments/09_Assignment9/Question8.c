// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    switch(n)
    {
        case 0:
            printf("%d",n);
            break;
        case -1000000 ... -1:
            printf("%d", n*(-1) );
            break;
        case 1 ... 1000000:
            printf("%d", n*(-1) );
            break;
        default:
            printf("Please enter Integer only");
    }
    return 0;
}
