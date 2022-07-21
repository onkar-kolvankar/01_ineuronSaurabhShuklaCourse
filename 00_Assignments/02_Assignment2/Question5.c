// Write a program to input a three-digit number and display the sum of the digits.
// 345 -> 3+4+5 = 12 , 12 -> 

#include<stdio.h>
int main()
{
    int num ,sum = 0 ,temp_num;
    printf("Enter a 3-digit number :");
    scanf("%d",&num);
    temp_num = num;
    
    sum +=  (temp_num % 10);
    temp_num /= 10;
    sum += (temp_num % 10);
    temp_num /= 10;
    sum += temp_num;

    printf("The sum of digits of %d is %d",num , sum);

    return 0;
}