#include<stdio.h>
#include<string.h>
typedef struct student
{
    int rollNo;
    char name[50];
    char dept[30];
    char course[30];
    int yearOfjoining;
} student;

void compare(student a, student b)
{
    if(strcmp(a.dept, b.dept) == 0)
        printf("The departments are same.");
    else
        printf("The departments are not same.");
    return;
}

int main()
{
    student s1,s2;
    s1.rollNo=001;
    strcpy(s1.name,"Akash Gupta");
    strcpy(s1.dept,"CSE");
    strcpy(s1.course,"B.TECH");
    s1.yearOfjoining=2024;

    s2.rollNo=001;
    strcpy(s2.name,"Rohit Kumar");
    strcpy(s2.dept,"CSE");
    strcpy(s2.course,"B.TECH");
    s2.yearOfjoining=2026;

    compare(s1,s2);
    return 0;
}