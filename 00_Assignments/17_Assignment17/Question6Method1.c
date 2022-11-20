// Write a program to reverse a string.

#include<stdio.h>

int main()
{
    char str[20] = "Onkar Kolvankar" , temp;
    int count ;

    // Method 1 - we will count total chars and then interchange the 1st with Last and so on.

    for(count=0;str[count] ;count++  );

    

    if(count % 2 == 0)
    {
        // total chars are even - 
        for(int i  = 0 ; i <= (count / 2) - 1 ; i++)
        {
            temp = str[i] ;
            // 0 1 2 3 4 5 
            str[i] = str[(count - 1)-i];
            str[(count - 1)-i] = temp;

        }
    }
    else{
        // total chars are odd - 
        for(int i  = 0 ; i <= ((count-1) / 2) - 1 ; i++)
        {
            temp = str[i] ;
            // 0 1 2 3 4 5 
            str[i] = str[(count - 1)-i];
            str[(count - 1)-i] = temp;

        }
    }

    printf("%s",str);

    
    

    return 0;
}