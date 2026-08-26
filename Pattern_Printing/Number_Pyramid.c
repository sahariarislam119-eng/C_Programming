#include<stdio.h>
int main()
{
    int i,j,k,r;
    printf("\nEnter Number of Rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=r-i;j++)
        {
            printf("  ");
        }
        
        for (k=1;k<=2*i-1;k++)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
    return 0;
} 