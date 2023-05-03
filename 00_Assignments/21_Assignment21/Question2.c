// Write a function to take input employee data from the user. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct Employee
    {
        int emp_id;
        char emp_name[40];
        float emp_salary;
    };
struct Employee input(struct Employee e)
{
    printf("Enter employee Id:");
    scanf("%d",&e.emp_id);

    printf("Enter employee name :");
    fflush(stdin);
    fgets(e.emp_name,40,stdin);
    e.emp_name[strlen(e.emp_name) - 1] = '\0';

    printf("Enter employee salary:");
    scanf("%f",&e.emp_salary);

    return e;

}

int main()
{
    struct Employee emp1;

    emp1 = input(emp1);

    printf("\nEMPLOYEE DETAILS -\n");
    printf("%d %s %f",emp1.emp_id,emp1.emp_name,emp1.emp_salary);
       
    
    return 0;
}