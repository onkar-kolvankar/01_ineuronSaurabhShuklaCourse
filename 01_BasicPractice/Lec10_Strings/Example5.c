// To see why we use %s and %c in string printing
#include <stdio.h>
int main()
{
    char city[10] = "Ratnagiri";

    printf("You line in ");
    for(int i = 0 ; city[i ] ; i++)
    {
        printf("%c",city[i]);
    }
    printf("\nUsing %%c you can perform operations on the string : ");
    for(int i = 0 ; city[i ] ; i++)
    {
        printf("%c",city[i] + 2);
    }

    printf("\nusing %%s you can directly print your string.");
    printf("\nyou live in %s.",city);
    

    return 0;
}