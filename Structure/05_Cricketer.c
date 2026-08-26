#include<stdio.h>
typedef struct cricketer
{
    char name[50];
    int age;
    int noOfTestMatch;
    float avgRun;
} cricketer;

int main()
{
    cricketer arr[2];
    for(int i=0;i<2;i++)
    {
        printf("\nEnter Name of cricketer: ");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter age of %dth cricketer: ",i);
        scanf("%d",&arr[i].age);
        printf("Enter noumber Of Test Match played of %dth cricketer: ",i);
        scanf("%d",&arr[i].noOfTestMatch);
        printf("Enter average Run of %dth cricketer: ",i);
        scanf("%f",&arr[i].avgRun);
    }
    printf("\n!DISPLAY!\n")
    for(int i=0;i<2;i++)
    {
        printf("\nName: %s", arr[i].name);
        printf("\nAge: %d", arr[i].age);
        printf("\nTest Matches: %d", arr[i].noOfTestMatch);
        printf("\nAverage Runs: %.2f\n", arr[i].avgRun);
    }
    return 0;
}