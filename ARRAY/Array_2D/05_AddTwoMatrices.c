#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of column: ");
    scanf("%d",&c);
    int arr[r][c], brr[r][c];
    printf("\nEnter matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEnter matrix 2:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\nSum of two matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}