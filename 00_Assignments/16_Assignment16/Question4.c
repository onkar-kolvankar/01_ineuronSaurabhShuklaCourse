// Write a program in C to find the sum of right diagonals of a matrix.
/*  
    1 2 3       Right Diagonal ->       3
    4 5 6                            5        -> 3 + 5 + 6
    6 7 8                         6
*/
#include<stdio.h>

int main()
{

    int m_row;
    printf("Enter the rows of Square matrix :");
    scanf("%d", &m_row);

    int square_matrix[m_row][m_row];
    int right_diagonal_Sum = 0;

    printf("Enter the %d elements of the square matrix :\n", m_row*m_row);
    for(int i = 0 ; i < m_row; i++)
    {
        for(int j = 0 ; j < m_row ; j++)
        {
            scanf("%d", &square_matrix[i][j]);
        }
    }

    int i = 0, j = m_row - 1;
    while(i < m_row || j > -1)
    {
        right_diagonal_Sum += square_matrix[i][j];
        i++;
        j--;
    }
    printf("Sum of Right Diagonal of Square matrix = %d", right_diagonal_Sum);

    return 0;
}