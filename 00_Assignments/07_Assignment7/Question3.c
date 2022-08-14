// Write a program to check whether a given number is there in the Fibonacci series or not .
#include<stdio.h>
int main()
{
    int num , prev_no = 1,curr_no = 1,next_no;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num == 1){
        printf("%d is in Fibonacci series.", num);
    }
    else{
        for (int i = 1; 1; i++)
        {
            next_no = curr_no + prev_no;
            prev_no = curr_no;
            curr_no = next_no;

            if (curr_no == num)
            {
                printf("%d is in Fibonacci series.", num);
                break;
            }
            if (curr_no > num)
            {
                printf("%d is NOT IN FIBONNACCI", num);
                break;
            }
        }
    }
    

    return 0;

}