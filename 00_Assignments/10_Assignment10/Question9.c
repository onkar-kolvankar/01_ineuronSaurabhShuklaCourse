// Write a function to check whether a given number contains a given digit or not .(TSRS)
#include<stdio.h>
int checkDigitPresentOrNot(int , int);

int main(int argc, char const *argv[])
{
    int num ,digit_to_find;
    printf("ENter a number and digit:");
    scanf("%d %d", &num, &digit_to_find);

    if(checkDigitPresentOrNot(num,digit_to_find) == 1)
        printf("%d is present in %d", digit_to_find, num);
    else
        printf("%d is NOT present in %d", digit_to_find, num);

    return 0;
}
int checkDigitPresentOrNot(int n, int digit_to_find)
{
    int rem_num ,flag = 0 ;
    while(n!=0)
    {
        if (n % 10 == digit_to_find)
        {
            flag = 1;
            break;
        }
        else
        {
            n = n / 10;
        }
    }
    return flag;
    
}

