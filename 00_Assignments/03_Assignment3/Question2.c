// Write a program to check whether a given number is divisible by 5 or not
// 45 - Divisible , -15 - Divisible , 36 - > Not Divisivble

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    num % 5 ==0 ?  printf("%d is Divisible by 5",num) : printf("%d is Not Divisible by 5",num);

    
    return 0;

}