// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main()
{
    int tempVar , elmtCount = 0 ,sum = 0;

    int *ptrInt;

    printf("Enter the number of elements in array :");
    scanf("%d",&elmtCount);

    ptrInt = (int *)calloc(elmtCount , sizeof(int));

    for(int i = 0 ; i < elmtCount ; i++){
        printf("Enter the %d element :",i);
        scanf("%d",ptrInt + i);
    }

    // print the elements
    for(int i = 0 ; i < elmtCount ; i++)
    {
        sum += ptrInt[i];
        printf("\n%d ",ptrInt[i]);
    }

    printf("\nSum of all elements = %d",sum);

    free(ptrInt);

    return 0;
}