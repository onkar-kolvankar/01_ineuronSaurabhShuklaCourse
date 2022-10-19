// Write a function in C to count the frequency of each element of an array
// METHOD 1 - OPTIMIZED METHOD.
// - But this will not work when you have -ve values in array.
// - To solve that you need to add a fixed amount to the negative value to make it +ve
// - create a formula to make -ve value to +ve value.
/*
    {1,2,3,4,4,2,3,3,3,5,6} 
    op- 1->1 , 2->2 , 3->4 , 4->2 , 5->1 , 6->1
*/
#include<stdio.h>

void printElmtFrequency(int[], int, int);
int getMaxVal(int[], int);

int main()
{
    int mtx_size;
    printf("Enter the size of matrix :");
    scanf("%d", &mtx_size);

    int mtx[mtx_size];

    printf("Enter %d elements of the matrix :");
    for (int i = 0; i < mtx_size ; i++)
    {
        scanf("%d", &mtx[i]);
    }

    printElmtFrequency(mtx, mtx_size, getMaxVal(mtx, mtx_size) + 1);

    return 0;
}
int getMaxVal(int mtx1[],int mtx_size)
{
    int max = -99999;   
    for(int i = 0 ; i < mtx_size ; i++)
    {
        if(mtx1[i] > max)
        {
            max = mtx1[i];
        }
    }
    return max;
}

void printElmtFrequency(int mtx1[],int mtx1_size , int freqMtx_size)
{
    int frequency_mtx[freqMtx_size];
    for (int i = 0; i < freqMtx_size + 1;i++)  // Set all values in frequency mtx = 0
    {
        frequency_mtx[i] = 0;
    }

    for (int i = 0; i < mtx1_size;i++)
    {
        frequency_mtx[mtx1[i]]++;
    }

    // print frequency of elements 
    for(int i = 0 ; i < freqMtx_size ; i++)
    {
        if(frequency_mtx[i] != 0)
        {
            printf("%d -->  %d \n", i,frequency_mtx[i]);
        }
        
    }
}