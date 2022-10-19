// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>

int main()
{
    int mtx[2][3] = {{7, 3, 4, 5}, {2, 1, 3, 14}};

    int row_elmts, col_elmts;

    printf("Enter the number of elements in row of matrix :");
    scanf("%d", row_elmts);
    printf("Enter the number of elements in row of matrix :");
    scanf("%d", col_elmts);

    int transpose_mtx[col_elmts - 1][row_elmts - 1];

    for (int i = 0; i < row_elmts; i++)
    {
        for(int j = 0 ; j<col_elmts ; j++)
        {
            transpose_mtx[j][i] = mtx[i][j];
        }
    }

    return 0;
}
void printMtx(int mtx1[][], int rows,int cols)
{
    for (int i = 0;  i < rows ; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mtx1[i][j]);
        }
    }
}
