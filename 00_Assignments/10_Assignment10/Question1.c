// Write a function to calculate the area of a circle.(TSRS)
#include<stdio.h>

float calCircleArea(float);         // Function Declaration

int main()
{
    float radius ;

    printf("Ente the radius of circle:");
    scanf("%f",&radius);

    printf("\nArea of circle = %f",calCircleArea(radius));      // Function Call

    return 0;
}
float calCircleArea(float r)        // Functin Definition
{
    return 3.14 * r * r;
}