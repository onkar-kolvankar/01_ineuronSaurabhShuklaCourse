
#include <stdio.h>
int main()
{
    for(int row = 1 ; row <= 5 ; row++)
    {
        for(int col = 1 ; col <= 9 ; col++)
        {
            if(row==5)
            {
                printf("* ");
            }
            else if(col == (5 - (row - 1)) || col == (5 + (row - 1)) )
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