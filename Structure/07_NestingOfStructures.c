#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[50];
    int emp_ID;
    float salary;
} employee;

typedef struct specialEmployee
{
    employee basic;
    float specialAllowance;
} specialEmployee;

int main()
{
    specialEmployee emp1;
    strcpy(emp1.basic.name,"Saaud Hossain");
    emp1.basic.emp_ID=1090022;
    emp1.basic.salary=48562.50;
    emp1.specialAllowance=21762.50;

    printf("\nEmployee name: %s",emp1.basic.name);
    printf("\nEmployee ID: %d",emp1.basic.emp_ID);
    printf("\nEmployee's salary: %.2f",emp1.basic.salary);
    printf("\nEmployee's special allowances: %.2f",emp1.specialAllowance);
    return 0;
}