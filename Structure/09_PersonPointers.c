#include<stdio.h>
#include<string.h>
typedef struct person
{
    int age;
    float weight;
} person;

int main()
{
    person p1;
    p1.age=21;
    p1.weight=90.5;
    printf("\n%d",p1.age);
    printf("\n%.2f",p1.weight);

    person *x = &p1;
    // (*x).age=27;
    x->age=27;
    // (*x).weight=100;
    x->weight=100; 
    printf("\n%d",p1.age);
    printf("\n%.2f",p1.weight);
    return 0;
}