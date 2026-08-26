#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,r,c,max=INT_MIN,min=INT_MAX;
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]>max)
            max=arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("\nMin elements of the matrix = %d. ",min);
    return 0;
}
