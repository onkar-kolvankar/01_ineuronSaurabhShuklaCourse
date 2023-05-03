// Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>

struct Student
{
    int st_roll ,st_age , st_class ;
    char st_name[40] ;
};

// function to take input in student datatype
struct Student input()
{
    struct Student s;

    printf("Enter student roll no:");
    scanf("%d",&s.st_roll);

    printf("Enter student Name:");
    fflush(stdin);
    fgets(s.st_name,40,stdin);
    // make last new line character as \0
    s.st_name[strlen(s.st_name) - 1] = '\0';

    printf("Enter student Age :");
    scanf("%d",&s.st_age);

    printf("Enter student Class:");
    scanf("%d",&s.st_class);

    return s;
}

void display(struct Student s)
{
    printf("Roll = %d Name = %s Class = %d Age = %d",s.st_roll,s.st_name,s.st_class,s.st_age);
}


int main()
{
    int no_of_students = 10;
    struct Student st[no_of_students];

    // taking input of student info.
    for(int i = 0 ; i < no_of_students ; i++)
    {
        printf("--Enter Details of Student %d\n",i+1);
        st[i] = input();
    }

    // display stduent info;
    for(int i = 0 ; i < no_of_students ; i++)
    {
        display(st[i]);
        printf("\n");
    }

    
    return 0;
}