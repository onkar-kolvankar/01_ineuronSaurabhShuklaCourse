// Write a program to find the position of first 1 in LSB.
// 8 in Decimal -> 1000 in Binary , 7 in Binary -> 0111 in Binary
// In 1000 LSB(Least Significant Bit) = 0 , MSB(Most Siginificant Bit) = 1
// in LSB => from Right to Left find position of 1 which comes first.
// >> Right Shift Operator -> to shift bits in right direction in Binary form.
// Ex - 14 -> 1110 , 18 -> 10010 , 108 -> 1101100

#include<stdio.h>
int main()
{
    int num , and_op_result = 0 ,position = 1;
    printf("Enter a number :");
    scanf("%d",&num);

    if(num == 0)    // Because there is no 1 in 0 so while loop could stuck in infinity loop.
    {
        printf("There is no 1 in this number.");
    }
    else
    {
        while(and_op_result == 0)
        {
            and_op_result = num & 1;
            if(and_op_result == 0)
            {
                // do right shift operation and increase position or count by 1.
                num = num >> 1;
                position++;
            }
            else
            {
                // increase position or count by 1 and print posiion.
                printf("The position of first 1 from LSB is = %d", position);
                break;
            }
        }   
    }
    return 0;

    /*
    Sir used while loop condition to directly check if the number is 0 or not and to get out of loop.

    while(num != 0)
    {
        rest code is here..
        
    } 

    */
}