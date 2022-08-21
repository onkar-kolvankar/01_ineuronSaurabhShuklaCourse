// Write a function to calculate LCM of two numbers.(TSRS)
#include<stdio.h>
int getLCM(int,int) ;

int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Enter 2 nos :");
    scanf("%d %d",&n1,&n2);

    printf("LCM(%d,%d) = %d",n1,n2,getLCM(n1,n2));


    return 0;
}
int getLCM(int a,int b)
{
    if(b>a)
    {
        for(int i = b ; i<= a*b ; i++)
        {
            if(i % a == 0 && i % b == 0)
            {
                return i;
            }
        }
    }
    else if(a>b)
    {
        for (int i = a; i <= a * b; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                return i;
            }
        }
    }
    else
    {
        return a;
    }

}
