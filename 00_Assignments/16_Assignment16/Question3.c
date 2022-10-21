// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>

int main()
{
    int m_row , m_col , t_row , t_col;
    printf("Enter how many rows are there in a matrix :");
    scanf("%d", &m_row);
    printf("Enter how many cols are there in a matrix :");
    scanf("%d", &m_col);

    t_row = m_col;
    t_col = m_row;

    int mtx[m_row][m_col] , transpose_mtx[t_row][t_col];

    // take matrix input
    for (int i = 0; i < m_row ; i++)
    {
        for(int j  = 0 ; j < m_col ; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }
    // Assign elements in transpose matrix
    for (int i = 0; i < t_row; i++)
        for (int j = 0; j < t_col; j++)
            transpose_mtx[i][j] = mtx[j][i];

    // Print elements from transpose mtx.
    for(int i = 0 ; i<t_row ; i++)
    {
        for(int j = 0 ; j < t_col ; j++)
        {
            printf("%d ", transpose_mtx[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// void printMtx(int mtx[][], int rows, int cols)
// {
//     for(int i = 0 ; i<rows ; i++)
//     {
//         for(int j = 0 ; j < cols ; j++)
//         {
//             printf("%d ", mtx[i][j]);
//         }
//         printf("\n");
//     }
// }
