// Write a program to calculate sum of first N even natural numbers
// Formula of sum of n even natural nos = n(n+1)
#include <stdio.h>
int main()
{
    int n, sum = 0 ,even = 2;
    printf("Enter how many even nat nos you want :");
    scanf("%d", &n);

    // Method 1 formula 
    printf("Sum of first %d Even natural nos = %d\n", n, n * (n + 1));

    // Method 2
    
    // for(int i = 1 ; i<= n ; i++){
    //     sum +=  i*2;
    // }
    // printf("\nSUM = %d ",sum);
    

    return 0;
}