#include<stdio.h>
int main()
{
    int i,j,r,a;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    a=1;
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=i;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}