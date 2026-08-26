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
    int n,r,nCr;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nEnter r : ");
    scanf("%d",&r);
    nCr = combination(n,r);
    printf("\n%dC%d=%d",n,r,nCr);
    return 0;
}