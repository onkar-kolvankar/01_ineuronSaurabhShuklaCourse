
#include <stdio.h>
int main()
{
    int total_rows = 4 , total_cols = 7 ,count;
    int mid_col = (total_cols + 1) / 2;
    for(int rows = 1 ;rows <= total_rows ; rows++)
    {
        count = 1;
        for(int cols = 1 ; cols <= total_cols ;)
        {
            
            if(cols == (mid_col + 1) - rows )
            {        
                // code to print numbers in pyramid.
                for(int i = 1; i <= (2*rows - 1) ; i++)
                {
                    // printf("* ");
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
                //cols = cols + (2*rows - 1) - 1;
            }
            else{
                printf("  ");
                cols++;         //Instead of putting increament in for we put it in both if and else condition. 
            }
        }
        printf("\n");
    }
    return 0;
}