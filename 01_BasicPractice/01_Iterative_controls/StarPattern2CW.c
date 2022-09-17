#include<stdio.h>
int main()
{
    int lines;
    printf("Enter no of lines you want in square mtx pattern :");
    scanf("%d",&lines);

    for(int i = 1 ; i<= lines ; i++)
    {
        for (int j = 1; j <= lines; j++)
        {
            if(j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
        
    }
    return 0;
}