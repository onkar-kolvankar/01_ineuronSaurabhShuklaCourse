// Write a program to print the first N even natural numbers in reverse order
// n=3 -> 6,4,2     ;   n=10 -> 20,18,16,14,12,10,8,6,4,2
// start digit of sequence = n*2
# include<stdio.h> 
int main()
{
    int n, even_nat;
    printf("Enter how many even natural nos you want to display :");
    scanf("%d", &n);

    even_nat = n*2;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", even_nat);
        even_nat -= 2;
    }

    return 0;
}