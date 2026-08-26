#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of column: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("\nEnter Matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nTransposed Matrix: \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}