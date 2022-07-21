#include <stdio.h>
#include <conio.h>
int sum(int n1,int n2){

    return n1+n2;

}

int main()
{
    int a,b,c;
    scanf("Enter 2 nos for addition %d and %d",a,b);
    c = sum(a,b);
    printf("Sum of 2 nos is %d",c);


    //printf("Hello world");
    return 0;
}
