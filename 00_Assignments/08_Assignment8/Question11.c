
#include <stdio.h>
int main()
{
    char count;
    for(int row = 1 ; row <= 5 ; row++)
    {
        count = 'A';
        for(int cols = 1 ; cols <= 9 ; )
        {
            if(cols == (5 + 1 - row) )
            {
                for(int i = 1 ; i <= (2*row - 1) ; i++)
                {
                    //printf("* ");
                    if(cols < 5){
                        printf("%c ",count);
                        count++;
                    }
                    else if(cols == 5)
                    {
                        printf("%c ",count);
                    }
                    else{
                        --count;
                        printf("%c ",count);
                    }

                    cols++;
                }
            }
            else{
                printf("  ");
                cols++;
            }
        }
        printf("\n");
    }
    return 0;
}