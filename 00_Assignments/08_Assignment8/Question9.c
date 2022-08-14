
#include <stdio.h>
int main()
{
    int count , total_rows = 4 , total_cols = 7;
    int mid_col = (total_cols + 1) / 2;
    for(int row = 1 ; row <= total_rows ; row++)
    {
        count = 1;
        for(int cols = 1 ; cols <= total_cols ; )
        {
            if(row==cols)
            {
                for(int i = 1; i <= (2 * (total_rows + 1 - row) - 1 ) ; i++)
                {
                    if(cols < mid_col){
                        printf("%d ",count);
                        count++;
                    }
                    else if(cols == mid_col){
                        printf("%d ",count);
                    }
                    else{
                        --count;
                        printf("%d ",count);
                    }
                    cols++;
                }
            }
            else{
                printf("  ");
                cols++;
            }
        }
        printf("\n");
    }
    return 0;
}