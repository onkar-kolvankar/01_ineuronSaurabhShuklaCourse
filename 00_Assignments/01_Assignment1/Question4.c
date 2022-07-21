/* WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format 
Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius_circle;
    
    const float pi = 3.14;

    printf("Enter the radius of circle : ");
    scanf("%f",&radius_circle);

    printf("Area of circle is %lf having the radius %f",pi*radius_circle*radius_circle , radius_circle);

    return 0;
}
