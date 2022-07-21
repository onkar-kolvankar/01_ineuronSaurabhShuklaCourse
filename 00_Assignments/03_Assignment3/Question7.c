// Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary roots
// ax^2 + bx + c = 0 QE , b^2 - 4ac = DISCRIMINANT
#include<stdio.h>
int main()
{
    float a,b,c,discriminant;
    printf("The Quadratic equation is in form : ax^2 + bx + c = 0 \nEnter the value of a :");
    scanf("%f",&a);
    printf("Enter the value of b :");
    scanf("%f",&b);
    printf("Enter the value of c ");
    scanf("%f",&c);

    discriminant = (b*b) - 4*a*c;

    if(discriminant > 0)
    {
        // real and diff roots
        printf("The QE has real and Different roots.");
    }
    else if(discriminant == 0)
    {
        printf("The QE has real and equal roots");
    }
    else
    {
        printf("The QE has Imaginary roots.");
    }

    return 0;
}