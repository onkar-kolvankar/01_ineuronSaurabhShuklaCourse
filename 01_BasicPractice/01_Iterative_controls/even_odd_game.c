#include<stdio.h>
int main()
{
    int user_input , chances = 3;
    printf("Welcome. Enter a EVEN Number to win.\nYou will get total 3 chances.\nEnter Even number:");

    for(int i = 1 ; i<= chances ; i++)
    {

        scanf("%d",&user_input);

        if(user_input % 2 == 0)
        {
            printf("\nYou Win");
            break;
        }
        else
        {
            if(i == chances){
                printf("\nGame Over");
                
            }
            else
            {
                printf("Wrong answer. You have %d chances remaning.\nPlease enter again:",chances - i);
            }
        }


    }


    return 0;
}