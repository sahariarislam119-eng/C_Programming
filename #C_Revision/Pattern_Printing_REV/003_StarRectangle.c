#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("\nEnter number of rows: ");
    scanf("%d",&n);
    printf("\nEnter number of column: ");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}