#include<stdio.h>
int main(int argc, char const *argv[])
{
    int lines , num;
    printf("Enter number of lines of the square pattern matrix :");
    scanf("%d",&lines);

    for(int i = 1 ; i<=lines ; i++)
    {
        num = 1;
        for (int j = 1 ;j<=lines ; j++)
        {
            if(j<i)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",num);
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
