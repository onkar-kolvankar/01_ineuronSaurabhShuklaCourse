// Write a program to print all Armstrong numbers under 1000
// 0,1,2,3,4,5,6,7,8,9,..,153,..
// NOTE -> (IMP POINT )Also all 1-digit nos are ARMSTRONG NOS
#include<stdio.h>
int main()
{
    int temp_n ,digit,  sum_result = 0;

    printf("0,1,2,3,4,5,6,7,8,9,");
    for(int i = 10 ; i<=999 ; i++)
    {
        // since here we know nos will we till 999 i.e 3 digit so we don't need to cal no. of digits.
        // Just use if else
        // no need to check 1 digit nos.

        if(i>=10 && i<= 99)
        {
            // no of digit = 2
            temp_n = i;
            sum_result = 0;
            while(temp_n != 0)
            {
                digit = temp_n % 10;
                temp_n = temp_n / 10;
                sum_result = sum_result + digit * digit; // no need to use loop to get x to power y as we no: of digits
            }
        }
        else
        {
            // no of digits = 3
            temp_n = i;
            sum_result = 0;
            while (temp_n != 0)
            {
                digit = temp_n % 10;
                temp_n = temp_n / 10;
                sum_result = sum_result + digit * digit * digit; // no need to use loop to get x to power y as we no: of digits
            }
        }

        if(sum_result == i)
        {
            printf("%d,",i);           // Prints the i which is armstrong number.
        }
    }
    return 0;
}
