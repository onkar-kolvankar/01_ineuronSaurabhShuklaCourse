// Write a program in C to print or display the lower triangular of a given matrix
/*
    Lower Triangular    -> 13  0  0 
    Matrix                 4   9  0       a[i][j] = 0 for i < j
                           8   7  13
*/
#include<stdio.h>

int main()
{
    int m_row_cols;
    printf("Enter the rows/cols of Square matrix :");
    scanf("%d", &m_row_cols);

    int square_matrix[m_row_cols][m_row_cols];

    printf("Enter the %d elements of the square matrix :\n", m_row_cols*m_row_cols);
    for(int i = 0 ; i < m_row_cols; i++)
    {
        for(int j = 0 ; j < m_row_cols ; j++)
        {
            scanf("%d", &square_matrix[i][j]);
        }
    }

    printf("\nLower Triangular matrix is -\n");
    for(int i = 0 ; i < m_row_cols ; i++)
    {
        for (int j = 0; j < m_row_cols; j++)
        {
            if(i<j)
                printf("0 ");
            else
                printf("%d ", square_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}