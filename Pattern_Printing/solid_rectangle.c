#include<stdio.h>
int main()
{
    int i,j,l,b;
    printf("\nEnter length of rectangle : ");
    scanf("%d",&l);
    printf("\nEnter bredth of rectangle : ");
    scanf("%d",&b);
    for (i=1;i<=b;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=l;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 