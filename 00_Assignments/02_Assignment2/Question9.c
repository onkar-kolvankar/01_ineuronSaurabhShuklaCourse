// Write a program to print size of an int, a float, a char and a double type variable
// int -> 4 , float -> 4 , char -> 1 , double -> 8
#include<stdio.h>
int main()
{
    int a;
    a = sizeof(int);
    printf("The size of int = %d Bytes \n", a);

    a = sizeof(char);
    printf("The size of char = %d Bytes \n",a);

    a = sizeof(float);
    printf("The size of float = %d Bytes \n",a);

    a = sizeof(double);
    printf("The size of double = %d Bytes \n",a);

    return 0;
}