#include<stdio.h>
int main()
{
    int i,j,r;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=r;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}