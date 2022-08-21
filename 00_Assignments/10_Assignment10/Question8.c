// Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time.(TSRS)
// CONCEPT - Permutation -> nPr = n!/(n-r)!
#include<stdio.h>
int getPermutations(int,int) ;
int getFactorial(int) ;
int main(int argc, char const *argv[])
{
    int no_total_items , no_of_items_arranged;
    printf("Enter total number of items  , and how many you want to arrange :");
    scanf("%d %d", &no_total_items, &no_of_items_arranged);

    printf("Total Permutation = %d",getPermutations(no_total_items,no_of_items_arranged));
    return 0;
}
int getPermutations(int n , int r)
{
    return getFactorial(n) / getFactorial(n-r) ;
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

