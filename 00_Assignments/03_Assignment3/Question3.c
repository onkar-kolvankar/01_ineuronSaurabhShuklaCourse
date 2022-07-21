// Write a program to check whether a given number is an even number or an odd number
// 34 -> Even , 35 -> Odd , 0 -> neither even nor odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    // this works fine too.
    num == 0 ? printf("0 is neither even nor odd") : num % 2 == 0 ? printf("%d is Even.",num) :  printf("%d is Odd number.",num); 

    // if(num == 0){
    //     printf("0 is neither even nor odd");
    // }
    // else
    // {
    //     num % 2 == 0 ? printf("%d is Even.",num) :  printf("%d is Odd number.",num);   
    // }

    return 0;
}