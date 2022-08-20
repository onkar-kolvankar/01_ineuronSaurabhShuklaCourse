/*
Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition.Using
the switch statement.
For the first 50 units Rs.0.50 / unit
For the next 100 units Rs.0.75 / unit
For the next 100 units Rs.1.20 /unit
For units above 250 Rs.1.50 /unit
An additional surcharge of 20 % is added to the bill.
*/
#include<stdio.h>
int main()
{
    int total_consumed_units ; 
    float base_amount  , final_amount;

    printf("Please enter total Consumed Units :");
    scanf("%d",&total_consumed_units);

    // --------------------------------METHOD 1 - Sir way   -----------------------------------------
    switch(total_consumed_units <= 50)
    {
        case 1: // when total units consumed <= 50
            base_amount = total_consumed_units * 0.5;
            break;

        case 0:     // when total units consumed >50

            switch(total_consumed_units <= 150)
            {
                case 1 :    // when 50 < total units consumed <= 150 
                    base_amount = 25 + (total_consumed_units - 50) * 0.75 ;
                    break;
                case 0 :   // when total consume units >150
                    switch(total_consumed_units <= 250)
                    {
                        case 1:     // when   150 < total consumed units <= 250
                            base_amount = 25 + 75 + (total_consumed_units - 150) * 1.2;
                            break;
                        case 0:     // when total consumed units > 250
                            base_amount = 25 + 75 + 120 + (total_consumed_units - 250) * 1.5;
                            break;
                    }
                    break;
            }
            break;
    }

    // additinal 20% charge
    final_amount = (base_amount * 120)/100;

    printf("Your total bill = %f Rs",final_amount );

    //  -------------------------------------------------------------------------------------------------------

    return 0;
}
