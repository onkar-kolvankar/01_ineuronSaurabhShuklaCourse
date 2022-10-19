// Write a function in C to count the frequency of each element of an array
// METHOD 1 - BRUTE FORCE METHOD.
// - we will use for loop to count frequency
// - we will store already counted variable so we don't count that number again.
/*
    {1,2,3,4,4,2,3,3,3,5,6} 
    op- 1->1 , 2->2 , 3->4 , 4->2 , 5->1 , 6->1
*/
#include<stdio.h>

void printElmtFrequency(int[], int);
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

    printElmtFrequency(mtx, mtx_size);

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

void printElmtFrequency(int mtx1[],int mtx1_size )
{
    int countedElmt_mtx[mtx1_size];
    int no_of_diff_elmts = 0 , elmt_freq = 0;

    // initialize 1st element of the countedElmt_mtx as 1st elemt of mtx1
    // So that 
    // countedElmt_mtx[0] = mtx1[0];
    // no_of_diff_elmts++;

    for (int i = 0; i < mtx1_size; i++)
    {
        elmt_freq = 0;
        // check if current element is there the counted array till the no_of_diff_elmts
        int flag = 0; // Element is new.
        for(int k = 0 ; k < no_of_diff_elmts ; k++)
        {
            if(mtx1[i] == countedElmt_mtx[k])
            {
                flag = 1;   // We have elemt already counted
                break;
            }
        }
        if(flag == 0)
        {
            // Means this elmt is not in countedElmt_mtx array so put it in there and increase no_of_diff_elmts counter
            countedElmt_mtx[no_of_diff_elmts] = mtx1[i];
            no_of_diff_elmts++;

            // loop to traverse in mtx1 array again and count frequency of mtx1[i] element.
            for (int j = 0; j < mtx1_size; j++)
            {
                if(mtx1[i] == mtx1[j])
                {
                    elmt_freq++;
                }
            }
            printf("%d  ->  %d\n", mtx1[i] , elmt_freq);
        }  
    }
}