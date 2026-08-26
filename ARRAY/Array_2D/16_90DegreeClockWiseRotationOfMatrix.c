#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("\nEnter no of rows & columns: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("\nEnter Matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i!=j)
            {
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }
    printf("\n90Degree Rotated Matrix: \n");
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
