
#include <stdio.h>
int main()
{
    int count ,total_rows = 4;
    
    for (int row = 1; row <= total_rows; row++)
    {
        count = 'A';
        for(int col = 1 ; col <= 7 ; )
        {
            if(row == col)
            {
                for(int i = 1 ;i <= 2*(total_rows + 1 - row) - 1 ; i++ )
                {
                    if(col < 4)
                    {
                        printf("%c ",count);
                        count++;
                    }
                    else if(col == 4)
                    {
                        printf("%c ", count);
                    }
                    else
                    {
                        count--;
                        printf("%c ", count);
                    }
                    col++;
                }
            }
            else{
                printf("- ");
                col++;
            }
        }
        printf("\n");
    }
    return 0;
}