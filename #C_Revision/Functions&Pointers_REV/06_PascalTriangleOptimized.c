#include<stdio.h>
int main()
{
    int i,j,k,n,first;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=1;
        for(k=n-1-i;k>0;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}