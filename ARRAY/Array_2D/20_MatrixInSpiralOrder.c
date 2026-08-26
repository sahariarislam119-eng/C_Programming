#include<stdio.h>
int main()
{
    int i,j,m,n,minR=0,minC=0,maxR,maxC,count=0;
    printf("\nEnter no of rows: ");
    scanf("%d",&m);
    printf("\nEnter no of column: ");
    scanf("%d",&n);
    maxR=m-1,maxC=n-1;
    int arr[m][n], totalElement=m*n;
    printf("\nEnter elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    while(count<totalElement)
    {
        // Printing Min Row
        for(i=minC;i<=maxC;i++)
        {
            printf("%d ",arr[minR][i]);
            count++;
        }
        minR++;
        if(count>=totalElement) break;
        // printing Max Column
        for(i=minR;i<=maxR;i++)
        {
            printf("%d ",arr[i][maxC]);
            count++;
        }
        maxC--;
        if(count>=totalElement) break;
        // printing Max Row
        for(i=maxC;i>=minC;i--)
        {
            printf("%d ",arr[maxR][i]);
            count++;
        }
        maxR--;
        if(count>=totalElement) break;
        // printing Min Column
        for(i=maxR;i>=minR;i--)
        {
            printf("%d ",arr[i][minC]);
            count++;
        }
        minC++;
        if(count>=totalElement) break;
    }
    return 0;
}