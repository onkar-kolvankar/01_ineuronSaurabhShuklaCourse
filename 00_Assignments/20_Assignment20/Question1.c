// Write a function to swap values of two in variables of calling function. (TSRS)

#include<stdio.h>

void swap(int *,int *);

int main()
{
    int a = 10 , b = 15;
    swap(&a,&b);
    printf("a = %d , b = %d",a,b);
    return 0;
}
void swap(int *add_num1,int *add_num2)
{
    int temp;
    temp = *add_num1;
    *add_num1 = *add_num2;
    *add_num2 = temp;
}