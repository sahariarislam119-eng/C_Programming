#include<stdio.h>
int fact(int x)
{
    int i,n=1;
    for ( i=1;i<=x;i++)
    {
        n=n*i;
    }
    return n;
}
int combination(int n, int r)
{
    int nCr;
    nCr = fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
int main()
{
    int n,i,j,k,iCj;
    printf("\nEnter number of rows : ");
    scanf("%d",&n);
    n=n-1;
    for (i=0;i<=n;i++)
    {
        for (k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        
        for(j=0;j<=i;j++)
        {
            iCj=combination(i,j);
            printf("%d ",iCj);
        }
        printf("\n");
    }
    return 0;
}