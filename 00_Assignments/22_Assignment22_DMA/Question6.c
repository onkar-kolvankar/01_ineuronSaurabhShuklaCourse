//  Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int elmtCount , tempInt , max = -9999;
    int *ptrInt;

    printf("Enter the no of elements in array :");
    scanf("%d",&elmtCount);

    ptrInt = (int *)calloc(elmtCount , sizeof(int));

    for(int i = 0 ; i < elmtCount ; i++)
    {
        scanf("%d",ptrInt + i);
    }

    for(int i = 0 ; i < elmtCount ; i++)
    {
        if(ptrInt[i] > max)
            max = ptrInt[i];
    }

    printf("\nMax element = %d",max);

    free(ptrInt);


    return 0;
}