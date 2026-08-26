#include<stdio.h>
int main()
{
    int row,i,j,k;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (i = 1; i <= row; i++)
    {
        for(k=1;k<=row-1;k++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j=j+2)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=row-i;j++)
        {
            printf("  ");
        }
        
        for (k=1;k<=2*i-1;k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}