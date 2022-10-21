// Write a program in C to accept a matrix and determine whether it is a sparse matrix
/*
    Sparse matrix - matrix which no of 0 elements > no of Non-zero element
    4  0  0  9
    0  0  0  2
    0  7  0  0 
*/
#include<stdio.h>

int main()
{

    int rows , cols , no_of_zeros= 0 , no_of_non_zeros = 0;
    printf("Enter no of rows in matrix :");
    scanf("%d", &rows);
    printf("Enter no of cols in matrix :");
    scanf("%d", &cols);

    int mtx[rows][cols];
    

    printf("Enter elements of matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            if(mtx[i][j] == 0)
                no_of_zeros++;
            else
                no_of_non_zeros++;
        }
    }

    if(no_of_zeros > no_of_non_zeros)
        printf("It is Sparse Matrix.");
    else
        printf("It is NOT a Sparse Matrix.");

    return 0;
}