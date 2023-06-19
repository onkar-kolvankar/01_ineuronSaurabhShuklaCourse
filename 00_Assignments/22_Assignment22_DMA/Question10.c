// Find out the maximum and minimum from an array using dynamic memory allocation
// in C
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int max = -9999 , min = 99999 , tempInt , noOfElmts;

    printf("Enter the no of elements :");
    scanf("%d",&noOfElmts);

    int *ptr;
    ptr = (int *)calloc(noOfElmts,sizeof(int));

    // take input 
    for(int i = 0 ; i < noOfElmts ; i++)
    {   
        printf("\nEnter element %d :",i);
        scanf("%d",ptr + i);
    }

    // find max and min
    for(int i = 0 ; i < noOfElmts ; i++)
    {
        if(ptr[i] > max)
            max = ptr[i];

        if(ptr[i] < min)
            min = ptr[i];
    }

    printf("\nMax = %d\nMin = %d",max,min);

    free(ptr);


    return 0;
}