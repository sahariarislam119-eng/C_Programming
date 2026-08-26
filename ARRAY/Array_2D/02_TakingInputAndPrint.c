#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of column: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            // printf("Enter the element of %dth Row & %dth Column: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            // printf("\nThe element of %dth Row & %dth Column = %d. ",i,j,arr[i][j]);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}