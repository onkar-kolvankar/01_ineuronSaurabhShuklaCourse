
#include <stdio.h>
int main()
{
    int total_cols = 19 ,total_rows = 13, mid_col;
    mid_col = (total_cols + 1)/2;

    // Code to print upper two pyramid 
    for(int i = 3 ;i>=1 ; i--)
    {
        for (int j = 1; j <= total_cols; j++)
        {
            if( ( j >= i  && j<= mid_col - i  ) || ( j>= mid_col + i   &&  j<= total_cols + 1 - i) )
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }

    // Code to print lower triangle
    for(int i = 1 ; i<= 10 ; i++ )
    {
        for(int j = 1 ; j<= total_cols ; j++)
        {
            if(i==1 && j==7)
            {
                printf("MySirG");
                j = j + 6 - 1; //to move counter to position of 'G' so when j++ takes place it prints from pos 13
            }
            else
            {
                if (j >= i && j <= total_cols - i + 1)
                    printf("*");
                else
                    printf(" ");
            }

            
        }
        printf("\n");
    }
    return 0;
}