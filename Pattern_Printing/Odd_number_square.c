#include<stdio.h>
int main()
{
    int i,j,l;
    printf("\nEnter length of edge of a square : ");
    scanf("%d",&l);
    for (i=1;i<=l;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=2*l-1;j=j+2)  // Second loop -> Number of stars in each line (number of columns).
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
} 