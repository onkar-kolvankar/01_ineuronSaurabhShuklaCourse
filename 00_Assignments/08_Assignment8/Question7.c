
#include<stdio.h>
int main()
{
    // for(int row = 1 ; row <= 5 ; row++)
    // {
    //     for(int cols = 1; cols <= 10 ; cols++)
    //     {
    //         if(){

    //         }
    //         else{
    //             printf("* ");
    //         }
    //     }
    //     printf("\n");
    // }

    int total_rows = 5 , total_cols = 10 ,no_of_spaces;
    for(int rows = 1 ; rows <= total_rows ; rows++)
    {   
        no_of_spaces = 2*rows - 2;
        for(int i = 1 ; i <= (total_cols - no_of_spaces)/2 ; i++)
        {
            printf("* ");
        }
        for(int j = 1 ; j <= no_of_spaces ; j++)
        {
            printf("  ");
        }
        for (int i = 1; i <= (total_cols - no_of_spaces)/2 ; i++)
        {
            printf("* ");
        }
        printf("\n");

    }

    

    return 0;
}