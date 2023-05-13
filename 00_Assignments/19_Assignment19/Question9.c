// Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed

#include<stdio.h>
#include<string.h>
int getFactorial(int);

int main()
{
    // char name[10][30] = {'\0'}; // initialize all elements in the list as '\0'

    char name[5][30] = {"Onkar","Rahul","Vikrant","Raunaq","Pranjal"};
    char inputName[30];
    int flagNamePresent = 0 , num; // Not present

    printf("\nEnter your name:");
    fgets(inputName,30,stdin);
    fflush(stdin);
    // because fgets takes the enter as newline input in the array thus making len = actual len + 1
    inputName[strlen(inputName) - 1] = '\0';

    // check if the name is present in the list.
    

    for(int i = 0 ; i < 5 ; i++)
    {
        if(strcmp(inputName,name[i]) == 0)
        {
            flagNamePresent = 1;
            break;
        }
    }
    if(flagNamePresent)
    {
        // cal factorial.
        printf("\nEnter the number to cal. its factorial:");
        scanf("%d",&num);
        fflush(stdin);
        printf("\nFactorial = %d",getFactorial(num));
    }
    else{
        printf("You entered wrong username.");
    }



    return 0;
}

int getFactorial(int a)
{
    if(a == 1)
        return 1;
    
    return a * getFactorial(a-1);
}