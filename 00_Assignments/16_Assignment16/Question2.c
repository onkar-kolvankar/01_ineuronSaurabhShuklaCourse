// Write a program to calculate the product of two matrices each of order 3x3
/*
a[00] a[01] a[02]          b[00] b[01] b[02]            (a[00]*b[00]) + (a[01]*b[10]) + (a[02]*b[20])   (a[00]*b[01]) + (a[01]*b[11]) + (a[02]*b[21])   (a[00]*b[02]) + (a[01]*b[12]) + (a[02]*b[22]) 
a[10] a[11] a[12]   X      b[10] b[11] b[12]        =   (a[10]*b[00]) + (a[11]*b[10]) + (a[12]*b[20])    
a[20] a[21] a[22]          b[20] b[21] b[22]            (a[20]*b[00]) + (a[21]*b[10]) + (a[22]*b[20])
*/
#include<stdio.h>
// void printArray(int[3][3], int);
int main()
{
    int mtx1[3][3], mtx2[3][3], prod_mtx[3][3];
    mtx1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, mtx2[3][3] = {{3, 5, 1}, {6, 3, 8}, {1, 8, 7}} ;
    int mtx_size = 3;

    // CODE - To take input of both matrices.

    // printf("Please enter %d elements of an Array 1 :",mtx_size);
    // for(int i = 0 ; i < mtx_size ; i++)
    // {
    //     for (int j = 0; j < mtx_size; j++)
    //     {
    //         scanf("%d", &mtx1[i][j]);
    //     }
    // }

    // printf("\nPlease enter %d elements of an Array 2 :",mtx_size);
    // for(int i = 0 ; i < mtx_size ; i++)
    // {
    //     for (int j = 0; j < mtx_size; j++)
    //     {
    //         scanf("%d", &mtx2[i][j]);
    //     }
    // }

    // CODE -  to perform matrix multiplication.
    printf("\nProduct of these matrices is :\n"); 
    for(int i = 0 ; i < 3 ; i++)
    {
        
    }


    // CODE - To print a matrix
    for(int i = 0 ; i < mtx_size ; i++)
    {
        for (int j = 0; j < mtx_size; j++)
        {
            printf("%d ", mtx1[i][j]); 
        }
        printf("\n");
    }
    

    // printArray(mtx1, 3);

    return 0;
}

// void printArray(int mtx[][] , int arr_size)
// {
//     for(int i = 0 ; i < arr_size ; i++)
//     {
//         for (int j = 0; j < arr_size; j++)
//         {
//             printf("%d ", mtx[i][j]);  // Error - Expression must be pointer to complete object type.
//         }
//         printf("\n");
//     }
// }
