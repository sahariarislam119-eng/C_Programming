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

    while(minR <= maxR && minC <= maxC)
    {
        // Top row
        for(i=minC;i<=maxC;i++)
            printf("%d ",arr[minR][i]);
        minR++;

        // Right column
        for(i=minR;i<=maxR;i++)
            printf("%d ",arr[i][maxC]);
        maxC--;

        // Bottom row
        if(minR <= maxR)
        {
            for(i=maxC;i>=minC;i--)
                printf("%d ",arr[maxR][i]);
            maxR--;
        }

        // Left column
        if(minC <= maxC)
        {
            for(i=maxR;i>=minR;i--)
                printf("%d ",arr[i][minC]);
            minC++;
        }
    }
    return 0;
}