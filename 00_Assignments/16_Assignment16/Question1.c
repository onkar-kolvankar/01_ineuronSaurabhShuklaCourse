// Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
void getSumOfMatrices(int[3][3], int[3][3], int[3][3],int);
int main()
{

    int mtx1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, mtx2[3][3] = {{3, 5, 1}, {6, 3, 8}, {1, 8, 7}} , mtx3[3][3];
    int mtx_size = 3;

    printf("Sum of mtx = \n");
    getSumOfMatrices(mtx1, mtx2, mtx3,mtx_size);

    for (int i = 0; i < mtx_size; i++)
    {
        for (int j = 0; j < mtx_size ; j++)
        {
            printf("%d ",mtx3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void getSumOfMatrices(int mtx1[3][3],int mtx2[3][3],int mtx3[3][3],int mtx_size)
{
    for (int i = 0; i < mtx_size; i++)
    {
        for (int j = 0; j < mtx_size ; j++)
        {
            mtx3[i][j] = mtx1[i][j] + mtx2[i][j];
        }
    }
}