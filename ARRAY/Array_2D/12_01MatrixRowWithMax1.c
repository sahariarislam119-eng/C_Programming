#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,r,c,count=0,max=INT_MIN,row;
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
            if(arr[i][j]==1)
            count++;
        }
        if(max<count)
        {
            max=count;
            row=i;
        }
        count=0;
    }
    printf("\n%dth row having the maximum no of 1's. ",row);
    return 0;
}