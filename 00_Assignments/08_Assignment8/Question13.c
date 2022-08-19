
#include <stdio.h>
int main()
{
    int total_row = 7, total_cols = 13, count;

    for (int i = 0; i <= total_row - 1; i++)
    {
        count = 'A';
        for (int j = 0; j <= total_cols - 1; j++)
        {
            // code to print either count or ' '
            if ((j >= 0 && j <= ((total_cols - 1) / 2) - i) || (j >= ((total_cols - 1) / 2) + i && j <= total_cols - 1))
                printf("%c ", count);
            else
                printf("  ");
            // Code to increament or decreament of count.
            if (j >= ((total_cols - 1) / 2))
                count--;
            else
                count++;
        }
        printf("\n");
    }
    return 0;
}