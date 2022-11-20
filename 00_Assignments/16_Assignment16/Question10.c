// Write a program in C to find the row with maximum number of 1s
#include<stdio.h>

int main()
{
    int row , cols;
    
    printf("Enter no: of rows:");
    scanf("%d",&row);
    printf("Enter no: of cols:");
    scanf("%d",&cols);

    int arr[row][cols];
    int ones_in_row_array[row];

    printf("Enter elements of matrix:\n");
    for(int i = 0 ; i < row ; i++)
        for(int j = 0 ; j < cols ; j++)
            scanf("%d",&arr[i][j]);

    // CODE - to find no of ones in rows and 
    int ones_in_rows;
    for(int i = 0 ; i < row ; i++)
    {
        ones_in_rows = 0;
        for(int j = 0 ; j < cols ; j++)
        {
            if(arr[i][j] == 1)
                ones_in_rows++;
        }
        ones_in_row_array[i] = ones_in_rows;
    }

    // CODE - To get row number with highest 1's
    int index_of_row_with_max_ones = 0;
    for(int i = 1 ; i < row ; i++)
    {
        if(ones_in_row_array[i] > ones_in_row_array[index_of_row_with_max_ones])
            index_of_row_with_max_ones = i;
    }

    printf("The row with max number of 1's is : %d",index_of_row_with_max_ones + 1);


    // printf("The row with max number of 1's is : %d",getRowWithMaxOnes(arr,row,cols));

    return 0;
}

// GETTING ERROR - Must point pointer to complete the object - in if condition for arraym[i][j]

// int getRowWithMaxOnes(int arraym[][],int row , int cols)
// {
//     int ones_count_arr[row];

//     int one_counts_in_row = 0;
//     for(int i = 0 ; i < row;i++)
//     {
//         one_counts_in_row = 0;
//         for(int j  =0 ; j < cols; j++)
//             if(arraym[i][j] == 1)
//                 one_counts_in_row++;

//         ones_count_arr[i] = one_counts_in_row;

//     }
    
//     // Code to get row with Max 1's.
//     int row_with_max_ones;

// }