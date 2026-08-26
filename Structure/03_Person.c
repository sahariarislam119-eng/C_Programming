#include<stdio.h>
#include<string.h>
struct Person
{
    char name[50];
    float salary;
    int age;
}p1,p2;
int main()
{
    // struct Person p1;
    strcpy(p1.name,"Saaud Hossain");
    p1.salary=45832.58;
    p1.age=21;
    // struct Person p2;
    strcpy(p2.name,"Muaaz Hossain");
    p2.salary=52632.36;
    p2.age=22;
    printf("\nThe name of first person: %s",p1.name);
    printf("\nThe age of second person: %d",p2.age);
    return 0;
}