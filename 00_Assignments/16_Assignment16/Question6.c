// Write a program in C to find the sum of rows and columns of a Matrix
#include<stdio.h>

int main()
{
    int rows , cols , sum= 0;
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
    // Sum of rows
    for(int i = 0 ; i < rows ; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += mtx[i][j];
        }
        printf("Sum Row %d = %d\n", i + 1, sum);
    }
    // Sum of cols
    for(int j = 0 ; j < cols ; j++)
    {
        sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += mtx[i][j];
        }
        printf("Sum Column %d = %d\n", j + 1, sum);
    }

        return 0;
}