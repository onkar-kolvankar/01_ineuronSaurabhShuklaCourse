#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lines;
    char letter;
    printf("Enter number of lines of the square pattern matrix :");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++)
    {
        letter = 'A';
        for (int j = 1; j <= lines; j++)
        {
            if (j < i)
            {
                printf("  ");
            }
            else
            {
                printf("%c ", letter);
                letter++;
            }
        }
        printf("\n");
    }
    return 0;
}
