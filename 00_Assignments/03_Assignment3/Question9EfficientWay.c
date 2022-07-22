#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter 3 number :");
    scanf("%d %d %d",&a,&b,&c);

    // Here max 2 operation will be calculated hence more efficient than earlier method

    // Actual code meaning -
    /*
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is Greatest",a);
        }
        else
        {
            printf("%d is Greatest",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is Greatest",b);
        }
        else
        {
            printf("%d is Greatest",c);
        }
    }
    */
    // SA-1 Its Short form to write
    // a > b ? a > c ? printf("%d is Greatest", a) : printf("%d is Greatest", c) : b>c ?printf("%d is Greatest",b) : printf("%d is Greatest",c) ;

    // SA-2 More short form.
    // Since Conditional operator is an EXPRESSION you can assign its value to another varialbe

    printf("%d is the Greatest",a>b ? a>c ? a : c : b>c ? b : c );  // Here putting : after c at last is not possible as you need ; after )

    return 0;
}
