// Write a function to print PASCAL Triangle.(TSRN)
#include<stdio.h>
void printPascalTriangle(int);
int get_nCr(int, int) ;
int getFactorial(int) ;

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number whose pascal triangle you want:");
    scanf("%d",&num);

    printPascalTriangle(num);
    return 0;
}
void printPascalTriangle(int x)
{
    int total_rows = x + 1 , total_cols = x * 2 + 1;
    for(int i = 0 ; i < total_rows ; i++)
    {
        for(int j = 0 ; j < total_cols ; j++)
        {
            if(j == total_rows-1-i)
            {
                for(int r = 0; r <= i /* i means n */ ; r++)
                {
                    printf("%d ", get_nCr(i, r));
                }
                // we put break here to stop printing spaces after nCr is completed
                // and directly move to the next line.
                // so that no extra loops are executed.
                break;   
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int get_nCr(int n , int r)
{
    // nCr = (n!) / ((n-r)! * r!)
    return ( getFactorial(n) ) / (getFactorial(n-r) * getFactorial(r) );
}
int getFactorial(int x)
{
    int fact = 1;
    for(int i = 1 ; i<= x ; i++)
    {
        fact = fact * i;
    }
    return fact;
}
