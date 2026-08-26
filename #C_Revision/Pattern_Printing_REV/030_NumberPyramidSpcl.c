#include<stdio.h>
int main()
{
    int i,j,k,l,n,a;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i-1;
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(l=1;l<=i-1;l++)
        {
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}