#include<stdio.h>
int main()
{
    int i,j,k,r,nst=1,nsp;
    printf("\nEnter Number of Rows : ");
    scanf("%d",&r);
    nsp=r-1;
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        nsp=nsp-1;
        
        for (k=1;k<=nst;k++)
        {
            printf("%d ",k);
        }
        nst=nst+2;
        
        printf("\n");
    }
    return 0;
}