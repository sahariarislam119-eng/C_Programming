#include<stdio.h>
int main()
{
    int i,j,r,c,sum=0;
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
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\nSum of all elements of the matrix = %d. ",sum);
    return 0;  
}