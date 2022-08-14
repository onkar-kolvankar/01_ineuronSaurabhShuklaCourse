
#include <stdio.h>
int main()
{
    int total_rows = 5 ,total_columns = 9;
    for(int rows = 1 ; rows <= total_rows ; rows++)
    {
        for (int cols = 1; cols <= total_columns; cols++)
        {
            if(cols == rows)
            {   // start printing * from this position 
                for(int i = 1 ; i <= (2 * (total_rows + 1 - rows) - 1) ; i++)
                {
                    printf("* ");
                }
                cols = cols + (2* (total_rows + 1 - rows) - 1) -1;

            }
            else{
                printf("  ");
            }
        }
        
        printf("\n");
    }
    return 0;
}