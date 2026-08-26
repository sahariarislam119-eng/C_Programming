#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,nst,nsp,x;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    x=n-1;
    nsp=1;
    nst=x;
    for(m=1;m<=2*x+1;m++)
    {
        printf("* ");
    }
    printf("\n");
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("* ");
        }
        for(k=1;k<=nsp;k++)
        {
            printf("  ");
        }
        for(l=1;l<=nst;l++)
        {
            printf("* ");
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}