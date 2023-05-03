// Write a function to sort employees according to their salaries [ refer structure from
// question 1]
#include<stdio.h>
#include<string.h>

struct Employee 
{
    int emp_id;
    char emp_name[40];
    float emp_salary;
};

struct Employee input(struct Employee e,int emp_count)
{
    printf("\nEnter data of Employee %d ----\n",emp_count+1);
    printf("Enter Employee id :");
    scanf("%d",&e.emp_id);

    printf("Enter Employee Name:");
    fflush(stdin);
    fgets(e.emp_name,40,stdin);
    e.emp_name[strlen(e.emp_name) - 1] = '\0';

    printf("Enter Employee Salary:");
    scanf("%f",&e.emp_salary);

    return e;
}

void display(struct Employee e)
{
    printf("\n%d %s %f\n",e.emp_id,e.emp_name,e.emp_salary);
}

struct Employee getMaxSalaryEmp(struct Employee emp[],int no_of_emp)
{
    float max_salary = -9999;
    int max_salary_index;
    for(int i = 0 ; i  < no_of_emp ; i++)
    {
        if(emp[i].emp_salary >= max_salary)
        {
            max_salary = emp[i].emp_salary;
            max_salary_index = i;
        }
    }

    return emp[max_salary_index];
}   

void sortData(struct Employee e[],int emp_count)
{
    struct Employee temp;
    int isSwapped = 1;

    while(isSwapped)
    {
        isSwapped = 0;
        for(int i = 0 ;  i < emp_count -1 ; i++)
        {
            if(e[i].emp_salary > e[i+1].emp_salary)
            {
                // swap the data
                temp = e[i];
                e[i] = e[i+1];
                e[i+1] = temp;

                // set flag that swapping took place
                isSwapped = 1;
            }
        }
    }
}


int main()
{
    int no_of_emp = 3;
    struct Employee e[no_of_emp] ;

    // to take input of the employee
    for(int i = 0  ; i < no_of_emp ; i++)
    {
       e[i] = input(e[i],i);
    }

    // to display all employee data
    printf("\nEmployee data before sorting ---");
    for(int i = 0 ; i < no_of_emp ; i++)
    {
        display(e[i]);
    }

    // sort data
    sortData(e,no_of_emp);

    // display data after  sorting
    printf("\nEmployee data after sorting ---");
    for(int i = 0 ; i < no_of_emp ; i++)
    {
        display(e[i]);
    }

    return 0;
}