// Write a program in C to find the sum of left diagonals of a matrix
/*  
    1 2 3       Left Diagonal -> 1     => i = j
    4 5 6                          5   => row = cols
    6 7 8                           8
*/
#include<stdio.h>

int main()
{
    int m_row;
    printf("Enter the rows of Square matrix :");
    scanf("%d", &m_row);

    int square_matrix[m_row][m_row];
    int sum_left_diagonal = 0;

    printf("Enter the %d elements of the square matrix :\n", m_row*m_row);
    for(int i = 0 ; i < m_row; i++)
    {
        for(int j = 0 ; j < m_row ; j++)
        {
            scanf("%d", &square_matrix[i][j]);
        }
    }

    for(int i = 0 ; i < m_row ; i++)
    {
        sum_left_diagonal += square_matrix[i][i];
    }
    
    printf("Sum of Left Diagonal of Square matrix = %d", sum_left_diagonal);

    return 0;
}