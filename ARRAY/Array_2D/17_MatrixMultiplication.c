#include<stdio.h>
int main()
{
    int i,j,k,m,n,p,q;
    // First matrix input.
    printf("\nEnter inputs of first matrix.");
    printf("\nEnter no of rows of first matrix: ");
    scanf("%d",&m);
    printf("Enter no of columns of first matrix: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elemnts:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // Second matrix input.
    printf("\nEnter inputs of second matrix.");
    printf("\nEnter no of rows of second matrix: ");
    scanf("%d",&p);
    printf("Enter no of columns of second matrix: ");
    scanf("%d",&q);
    int brr[p][q];
    printf("Enter elemnts:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    // n==p condition.
    if(n!=p) 
    {
        printf("\nThese two matrices cannot be multiplied.");
        return 0;
    }
    int crr[m][q];
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            crr[i][j]=0;
            for(k=0;k<n;k++)
            {
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    printf("\nMultiplied Matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}