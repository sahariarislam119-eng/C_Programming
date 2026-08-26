#include<stdio.h>
int main()
{
    int i,j,k,l,r,b;
    printf("\nEnter Number of Rows : ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf("  ");
        }

        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }

        b=i-1;
        for(l=1;l<=i-1;l++)
        {
            printf("%d ",b);
            b--;
        }

        printf("\n");
    }
    return 0;
}  