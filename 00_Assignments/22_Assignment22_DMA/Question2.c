// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int countDataVal ;
    float sum = 0;
    printf("Enter the number of data values:");
    scanf("%d",&countDataVal);

    int *ptr;

    ptr = (int *)calloc(countDataVal,sizeof(int));

    for(int i = 0 ; i < countDataVal ; i++)
    {
        scanf("%d",ptr+i);
        sum = sum + (ptr[i]);
    }

    printf("\nAvg = %f",sum/countDataVal);

    free(ptr);


    return 0;
}