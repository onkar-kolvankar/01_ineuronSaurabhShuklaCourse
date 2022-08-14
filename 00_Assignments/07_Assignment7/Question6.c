// Write a program to print all Prime numbers under 100
// Prime numbers - 2,3,5,7,11,13,17,19,
#include<stdio.h>
int main()
{
    // Method 1 - Basic method.
    int factor_count;
    
    for (int i = 2; i <= 100 ; i++)
    {
        factor_count = 0;
        for(int j = 1 ; j <= i ; j++)
        {
            if( i % j == 0){
                factor_count++;
            }
            if( factor_count > 2)
            {
                break;
            }
        }
        if(factor_count == 2){
            printf("%d  ",i);
        }
        // else if (factor_count > 2)
        // {
        //     continue;
        // }
        // else{
        //     printf("Something went wrong.");
        // }
        
    }
    
    return 0;
}