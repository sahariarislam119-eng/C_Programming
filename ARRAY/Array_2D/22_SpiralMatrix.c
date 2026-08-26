#include<stdio.h>
int main()
{
    int i,j,n,minR=0,minC=0,maxR,maxC,count=0,num=1;
    printf("\nEnter no of rows & column: ");
    scanf("%d",&n);
    maxR=n-1,maxC=n-1;
    int arr[n][n], totalElement=n*n;
    
    while(count<totalElement)
    {
        // Printing Min Row
        for(i=minC;i<=maxC;i++)
        {
            arr[minR][i]=num;
            num++;
            count++;
        }
        minR++;
        if(count>=totalElement) break;
        // printing Max Column
        for(i=minR;i<=maxR;i++)
        {
            arr[i][maxC]=num;
            num++;
            count++;
        }
        maxC--;
        if(count>=totalElement) break;
        // printing Max Row
        for(i=maxC;i>=minC;i--)
        {
            arr[maxR][i]=num;
            num++;
            count++;
        }
        maxR--;
        if(count>=totalElement) break;
        // printing Min Column
        for(i=maxR;i>=minR;i--)
        {
            arr[i][minC]=num;
            num++;
            count++;
        }
        minC++;
        if(count>=totalElement) break;
    }
    // printing Matrix
    printf("\nSpiral Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}