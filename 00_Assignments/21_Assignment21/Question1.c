// Define a structure Employee with member variables id, name, salary

#include<stdio.h>
#include<string.h>

struct Employee
{
    int emp_id;
    char emp_name[40];
    float emp_salary;
};


int main()
{
    int no_of_emp = 3;
    struct Employee e[no_of_emp];
    
    printf("Enter data of %d employees :\n");

    for(int i = 0 ; i < no_of_emp ; i++)
    {
        printf("Enter Employee id:");
        scanf("%d",&e[i].emp_id);

        printf("Enter employee name :");
        fflush(stdin);
        fgets(e[i].emp_name,40,stdin);
        
        // fgets also takes New line character as input.
        e[i].emp_name[strlen(e[i].emp_name) - 1] = '\0';

        printf("Enter employee salary:");
        scanf("%f",&e[i].emp_salary);
    }

    printf("\nEnployee Id     Employee Name       Employee Salary\n");
    for(int i = 0 ; i < no_of_emp ; i++)
    {
        printf("\n%d  %s  %f",e[i].emp_id,e[i].emp_name,e[i].emp_salary);
    }

    return 0;
}