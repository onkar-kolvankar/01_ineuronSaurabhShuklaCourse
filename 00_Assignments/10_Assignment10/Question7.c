// Write a function to calculate the number of combinations one can make from n items
// and r selected at a time.(TSRS)
// CONCEPT - combination -> nCr = (n!) / ( (n-r)! * r! )
#include<stdio.h>
int getCombinations(int, int);
int getFactorial(int);

int main(int argc, char const *argv[])
{
    int no_total_items , no_items_selected;
    printf("Enter total number of items  , and how many you want to select :");
    scanf("%d %d",&no_total_items , &no_items_selected);

    printf("Total Combinatin if we have %d objects and select %d of them = %d",no_total_items,no_items_selected,getCombinations(no_total_items,no_items_selected));
    return 0;
}
int getCombinations(int n , int r)
{
    return ( getFactorial(n) ) / (getFactorial(n-r) * getFactorial(r) );
}
int getFactorial(int x)
{
    int prod = 1;
    for (int i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    return prod;
}
