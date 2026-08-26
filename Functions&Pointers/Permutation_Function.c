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
int permutation(int n, int r)
{
    int nPr;
    nPr = fact(n)/fact(n-r);
    return nPr;
}
int main()
{
    int n,r,nPr;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nEnter r : ");
    scanf("%d",&r);
    nPr = permutation(n,r);
    printf("\n%dP%d=%d",n,r,nPr);
    return 0;
}