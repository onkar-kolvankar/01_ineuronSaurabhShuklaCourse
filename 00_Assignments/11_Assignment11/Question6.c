// Write a function to print all Prime numbers between two given numbers.(TSRN)
#include <stdio.h>
void printPrimeBtwNos(int, int);
int main(int argc, char const *argv[])
{
    int n1,n2;
    printf("Enter 2 numbers :");
    scanf("%d %d", &n1 , &n2);

    printPrimeBtwNos(n1,n2);

    return 0;
}
void printPrimeBtwNos(int x , int y)
{
    int flag;
    for (int num = x; num <= y; num++)
    {
        flag = 0;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", num);
        }
    }
}