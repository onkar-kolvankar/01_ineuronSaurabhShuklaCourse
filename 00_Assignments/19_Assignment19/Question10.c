//  Create an authentication system. It should be menu driven

#include<stdio.h>
#include<string.h>

void displayMainMenuInstructions();
void loginInstruction(char[],char[]);
void registerUser(char[],char[] );

int main()
{   
    char username[40] , password[40];
    int choice = 0;

    printf("\nRegister yourself:");
    registerUser(username,password);

    printf("\nRegisterd Successfully!!!");

    while(choice != 3)
    {
        displayMainMenuInstructions();
        scanf("%d",&choice);
        fflush(stdin);
        switch(choice)
        {
            case 1:
                loginInstruction(username,password);
                break;
            case 2:
                registerUser(username,password);
                printf("\nUser registered successfully.");
                break;
            case 3:
                return 0;
        }
    }
    

    return 0;
}

void registerUser(char userName[],char userPass[])
{
    printf("\nEnter your username :");
    fgets(userName,40,stdin);
    fflush(stdin);
    printf("\nEnter your password :");
    fgets(userPass,40,stdin);
    fflush(stdin);

    system("cls");
}

void displayMainMenuInstructions()
{
    printf("\nSelect from the following options:");
    printf("\n1. Login to your account:");
    printf("\n2. Reset your username and password:");
    printf("\n3. Exit:");
    printf("\nEnter your choice here:");
}

void loginInstruction(char userName[],char pass[])
{
    char ip_userName[40],ip_pass[40];

    do{
        printf("\nEnter your username :");
        fflush(stdin);
        fgets(ip_userName,40,stdin);
        fflush(stdin);
        printf("\nEnter your password :");
        fgets(ip_pass,40,stdin);
        fflush(stdin);

    }while(strcmp(ip_userName,userName) != 0 || strcmp(ip_pass,pass) != 0);

    printf("Login Successfull.");

}




