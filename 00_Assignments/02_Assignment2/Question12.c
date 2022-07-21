//  Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
//
#include<stdio.h>
int main()
{
    float dollar_to_rs_factor = 76.63f , amt_inr;
    
    printf("Enter amount in INR = ");
    scanf("%f",&amt_inr);

    printf("USD = %f",amt_inr / dollar_to_rs_factor);   


    return 0;
}