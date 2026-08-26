#include<stdio.h>
int main()
{
    int i,j,k,r,nsp=0,nst;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    nst=r;
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=nsp;j++)  // Second loop -> Number of spaces in each line (number of columns).
        {
            printf("  ");
        }

        for (k=1;k<=nst;k++)  // Third loop -> Number of stars in each line (number of columns).
        {
            printf("* ");
        }
        nsp++;
        nst--;
        printf("\n");
    }
    return 0;
}