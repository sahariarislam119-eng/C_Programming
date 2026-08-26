#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date arr[2];
    for(int i=0;i<2;i++)
    {
        printf("\nEnter day: ");
        scanf("%d",&arr[i].day);
        printf("Enter month: ");
        scanf("%d",&arr[i].month);
        printf("Enter year: ");
        scanf("%d",&arr[i].year);
    }

    if(arr[0].day==arr[1].day && arr[0].month==arr[1].month && arr[0].year==arr[1].year) printf("\nThe dates are equal.");
    else printf("\nThe dates are unequal.");
    return 0;
}