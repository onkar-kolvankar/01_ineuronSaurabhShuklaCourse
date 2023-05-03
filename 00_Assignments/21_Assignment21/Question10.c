// Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.
#include<stdio.h>
#include<string.h>

struct Marks
{
    int roll_no ;
    char name[40];
    float chem_marks , maths_marks , phy_marks ;
};

struct Marks input()
{
    struct Marks mark;

    printf("\nEnter student roll no :");
    scanf("%d",&mark.roll_no);

    printf("Enter student name :");
    fflush(stdin);
    fgets(mark.name , 40,stdin);
    mark.name[strlen(mark.name) - 1] = '\0';

    printf("Enter student marks in Chemistry , Maths and Physics :");
    scanf("%f %f %f",&mark.chem_marks ,&mark.maths_marks , &mark.phy_marks);

    return mark;

}
float getPercentage(struct Marks m)
{
    return (m.chem_marks + m.maths_marks + m.phy_marks)/3.0 ;

}

int main()
{

    int no_of_students = 2;
    struct Marks m[no_of_students];

    // take input
    for(int i  = 0  ; i < no_of_students ; i++)
    {
        printf("--Enter data of student %d",i+1);
        m[i] = input();
    }

    // display percentage
    for(int i = 0 ; i < no_of_students ; i++)
    {
        
        printf("\nRoll = %d Name = %s Percentage = %.2f",m[i].roll_no , m[i].name , getPercentage(m[i]));
    }

    return 0;
}