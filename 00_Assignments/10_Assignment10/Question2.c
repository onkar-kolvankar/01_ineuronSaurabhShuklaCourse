// Write a function to calculate simple interest.(TSRS)
// S.I = (P * R * T) / 100
#include<stdio.h>

float calSimpleInterest(float , float , float);

int main()
{
    float principal_amt , rate_of_interest , time;

    printf("Enter Principal Amount , Rate of Interest Anually and Time period in years :");
    scanf("%f %f %f",&principal_amt , &rate_of_interest, &time);

    printf("Simple Interest on this = %f", calSimpleInterest(principal_amt , rate_of_interest , time));


    return 0;
}

float calSimpleInterest(float p , float r ,float t)
{
    return (p * r * t) / 100;
}