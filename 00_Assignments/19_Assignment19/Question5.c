// Suppose we have a list of email addresses, check whether all email addresses have 
// ‘@’ in it. Print the odd email out.

#include<stdio.h>

int main()
{

    int total_emails = 5;
    char emails[total_emails][30] ;

    for(int i = 0 ; i < total_emails ; i++)
    {
        printf("Enter String No.%d :",i+1);
        fgets(emails[i],30,stdin);
    }

    // to check if it has @ in it
    int isPresent ;
    for(int i = 0 ; i < total_emails ; i++)
    {
        isPresent = 0;
        for(int j = 0 ; emails[i][j] ; j++)
        {
            if(emails[i][j] == '@')
                isPresent = 1;
        }

        if(!isPresent)   // isPresent == 0
            printf("%s\n",emails[i]);

    }
    return 0;
}