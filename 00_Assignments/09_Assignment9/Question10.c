// C program to find all roots of a quadratic equation using switch case
// QE -> ax^2 + bx + c = 0
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float discriminant ,root1 , root2;

    printf("Enter the value of the Coefficient of x^2 , Coefficient of x , constant term :");
    scanf("%d %d %d",&a,&b,&c);

    discriminant = (b*b) - (4*a*c);
    switch(discriminant >= 0.0)
    {
        case 1 :    // runs when D >= 0 -> Real
            root1 = ((-1 * b) + sqrtf(discriminant)) / (2 * a);
            root2 = ((-1 * b) - sqrtf(discriminant)) / (2 * a);

            printf("\nRoot 1 = %f  , Root 2 = %f ",root1,root2);
            break;
        case 0 :    // runs when D < 0 -> Imaginary roots
            printf("Roots are Imaginary.");
            break;
    }
    return 0;
}