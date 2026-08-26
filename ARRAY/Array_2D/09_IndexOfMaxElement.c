#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,r,c,max=INT_MIN,a,b;
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
            {
                max=arr[i][j];
                a=i;
                b=j;
            }
        }
    }
    printf("\nMax elements of the matrix = %d. ",max);
    printf("\nThe index of the Max element = (%d,%d)",a,b);
    return 0;
}
