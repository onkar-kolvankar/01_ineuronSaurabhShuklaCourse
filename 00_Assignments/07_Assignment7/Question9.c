// Write a program to check whether a given number is an Armstrong number or not
// 153 = 1^3 + 5^3 + 3^3 , 370 = 3^3 + 7^3 + 0^3 , 371 , 407
// A.N -> a number whose each digit when raised to no. of digits in number and added gives same number
// abcde = a^5 + b^5 + c^5 + d^5 + e^5 => Armstrong number.
#include<stdio.h>
int main()
{
    int n ,temp_n, no_digits = 0 ,sum_result = 0 , digit , digit_power_result = 1;
    printf("Enter a number :");
    scanf("%d",&n);

    // -------------------------------------- METHOD - 1 (MY METHOD) --------------------------------
    // Finding number of digits in number.
    temp_n = n;
    while(temp_n != 0)
    {
        temp_n = temp_n / 10;
        no_digits++;
    }

    // Now we need to use for loop for each digit to get result of their power and add to SUM 
    temp_n = n;                                 // Need to reinitialize temp_n variable to n as due to previous calculation it became 0
    while(temp_n != 0)                          // while loop will run for each digit.
    {
        digit = temp_n % 10;
        temp_n = temp_n / 10;
        digit_power_result = 1;                 // Need to make = 1 for every digit. 
        for (int i = 1; i <= no_digits; i++)
        {
            digit_power_result = digit_power_result * digit;
        }
        sum_result = sum_result + digit_power_result;

    }
    
    // Now check if sum_result == n (original number)
    if(sum_result == n)
    {
        printf("%d is an ARMSTRONG NUMBER.",n);
    }
    else{
        printf("%d is NOT ARMSTRONG NUMBER.",n);
    }

    // ---------------------------------- METHOD 1 (MY WAY) ENDS HERE ----------------------------
    return 0;
}