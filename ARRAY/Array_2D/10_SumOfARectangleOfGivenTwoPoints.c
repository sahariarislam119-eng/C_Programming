#include<stdio.h>
int main()
{
    int i,j,r,c,sum=0,l1,r1,l2,r2;
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of column: ");
    scanf("%d",&c);
    int a[r][c];
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Taking input of (l1,r1) and (l2,r2)
    printf("\nEnter l1: ");
    scanf("%d",&l1);
    printf("\nEnter r1: ");
    scanf("%d",&r1);
    printf("\nEnter l2: ");
    scanf("%d",&l2);
    printf("\nEnter r2: ");
    scanf("%d",&r2);

    printf("\n");
    for(i=l1;i<=l2;i++)
    {
        for(j=r1;j<=r2;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("\nSum of all elements of the matrix = %d. ",sum);
    return 0;  
}