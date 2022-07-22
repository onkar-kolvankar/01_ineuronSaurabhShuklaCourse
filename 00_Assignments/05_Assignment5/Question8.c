// Write a program to print squares of the first N natural numbers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many natural nos squares you want :");
    scanf("%d",&n);

    for(int i = 1;i<=n ; i++){
        printf("%d ",i*i);
    }

    return 0;
}