// Write a program to take a three-digit number from the user and rotate its digits by one position towards the right
// 345 -> 534 , 493 -> 349 , 377 -> 737
#include<stdio.h>
int main()
{
    int num , last_digit = 0 , rem_digit;
    printf("Enter a 3-digit number :\n");
    scanf("%d",&num);

    // METHOD 1 - Find last digit(%) and Remove last digit(/) and add rem num to the (last_digit * 100 + rem_num)
    last_digit = num % 10;
    rem_digit = num / 10;
    num = last_digit * 100 + rem_digit;

    printf("%d",num);

    return 0;
}