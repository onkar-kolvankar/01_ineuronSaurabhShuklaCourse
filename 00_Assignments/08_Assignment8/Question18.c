// NOTE -> In this question (No of rows = No of cols) MUST be true and they must be odd.
#include <stdio.h>
int main()
{
    int total_col = 9 , mid_col ,total_row, mid_row;
    total_row = total_col;
    mid_col = (total_col + 1) / 2;
    mid_row = mid_col;
    
    for (int i = 1; i <= mid_row; i++)
    {
        for (int j = 1; j <= total_col; j++)
        {
            if (j >= mid_col - (i - 1) && j <= mid_col + (i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = 1 ; i <= (total_row - mid_row) ; i++)
    {
        for(int j = 1 ; j <= total_col ; j++)
        {
            if (j >= (mid_col - (mid_col - i - 1)) && j <= (mid_col + (mid_col - i - 1)))
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}