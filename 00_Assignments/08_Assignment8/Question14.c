
#include <stdio.h>
int main()
{
    int total_rows = 5, total_cols = 5;
    for (int row = 1; row <= total_rows; row++)
    {
        for (int col = 1; col <= total_cols; col++)
        {
            if (row == total_rows)
            {
                printf("* ");
            }
            else if (col == 1 || row == col)
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