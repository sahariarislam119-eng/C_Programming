#include<stdio.h>
int main()
{
    int i,j,k,l,m,o,n,nst,nsp,x,a,b;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    x=n-1;
    nsp=1;
    nst=x;
    for(m=1;m<=n;m++)
    {
        printf("%d ", m);
    }
    for(o=n-1;o>=1;o--)
    {
        printf("%d ", o);
    }
    printf("\n");
    for(i=1;i<=x;i++)
    {
        a=1;
        for(j=1;j<=nst;j++)
        {
            printf("%d ",a);
            a++;
        }
        for(k=1;k<=nsp;k++)
        {
            printf("  ");
        }
        b=x;
        for(l=1;l<=nst;l++)
        {
            printf("%d ",b);
            b--;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}