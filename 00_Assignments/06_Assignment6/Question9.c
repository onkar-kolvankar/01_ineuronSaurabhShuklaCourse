// Write a program to calculate LCM of two numbers
// Lowest common multiple , a*b = LCM(a,b) * HCF(a,b)
#include<stdio.h>
int main()
{
    int a,b,small_value;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);

    // METHOD 1 - lower limit will = min(a,b) and Highest Limit will be = a*b
    
    if(a<b)
    {
        for(int i = a; i<= a*b ; i++)
        {
            if(i%a == 0 && i%b == 0)
            {
                printf("LCM(%d,%d) = %d",a,b,i);
                break;
            }
        }
    }
    else if(b < a)
    {
        for(int i = b ; i<= a*b ; i++)
        {
            if( i%a == 0 && i%b == 0 )
            {
                printf("LCM(%d,%d) = %d", a, b, i);
                break;
            }
            
        }
    }
    else    // when a=b then LCM = a i.e LCM(5,5) = 5
    {
        printf("LCM(%d,%d) = %d",a,b,a);
    }
    

    return 0;
}