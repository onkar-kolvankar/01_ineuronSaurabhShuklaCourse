
#include <stdio.h>
int main()
{
    int total_rows = 5 , total_cols = 9;
    for (int row = 1; row <= total_rows; row++)
    {
        for(int col = 1 ; col <= 9 ; col++)
        {
            if(row == 1)
            {
                printf("* ");
            }
            else if (col == (total_rows - (total_rows - row)) || col == (total_rows +(total_rows - row)) )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}