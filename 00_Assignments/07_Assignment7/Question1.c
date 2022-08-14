// Write a program to find the Nth term of the Fibonnaci series.
// Fibonnacci series -> 1,1,2,3,5,8,13,21,34,...
#include<stdio.h>
int main()
{
    int n , a= 0 ,b = 1 , temp ;
    printf("Enter which term you want of fibonnaci series :");
    scanf("%d",&n);

    // Method 1 - My Basic method
    if(n==1){
        printf("%d",a);
    }
    else if (n==2)
    {
        printf("%d",b);
    }
    else if (n<=0)
    {
        printf("Please enter valid term number.");
    }
    else
    {
        for(int i = 3 ; i<=n ; i++){
            temp = a + b;
            a = b;
            b = temp;
        }
        printf("%d", b);
    }
    return 0;
}