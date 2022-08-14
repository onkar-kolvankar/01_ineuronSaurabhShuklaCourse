// Write a program to check whether a given number is a Prime number or not
// 2,3,5,7,11 ...

#include <stdio.h>
int main()
{
    int n , flag = 0;
    // int factor_count = 0;    For Method 1
    printf("Enter a number :");
    scanf("%d", &n);

    // Method 1 -
    // only checking till half of number rather than checking till full number.
    // because a number's largest factor other than number itself is its half.
    /*
    for(int i = 1 ; i<=n ; i++)
    {
        if( n % i == 0){
            factor_count++;
        }
    }
    if(factor_count == 2)
    {
        printf("%d is a Prime number.",n);
    }
    else 
    {
        printf("%d is NOT a Prime number",n);
    }
    */

    // Method 2 - Just check till num/2 and no need to check 1.
    for(int i = 2 ; i <= (n/2) ; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Not Prime");
    }
    else{
        printf("Prime Number.");
    }

    return 0;
}
