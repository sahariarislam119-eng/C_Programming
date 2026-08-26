#include<stdio.h>
struct employee //User defined data type.
{
    int emp_ID;
    int age;
    float salary;
};

int main()
{
    struct employee Saaud;
    Saaud.emp_ID=42001;
    Saaud.age = 22;
    Saaud.salary=42761.85;
    
    return 0;
}