// Write a recursive function to print octal of a given decimal number
#include <stdio.h>

void getOctal(int);     // function declaration
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if(n == 0)
        printf("0");
    else
        getOctal(n);    // function call

    return 0;
}

void getOctal(int num)      // function definition
{
    if(num==1){
        printf("1");
    }
    else{
        getOctal(num / 8);
        printf("%d", num % 8);
    }
}