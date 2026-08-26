#include<stdio.h>
int main()
{
    int n,r,i,j,k,nCr;
    printf("\nEnter n :");
    scanf("%d",&n);
    printf("\nEnter r :");
    scanf("%d",&r);
    int nFact=1; //n!
    int rFact=1; //r!
    int nrFact=1; //(n-r)!
    for ( i=1;i<=n;i++)
    {
        nFact=nFact*i;
    }
    for ( j=1;j<=r;j++)
    {
        rFact=rFact*j;
    }
    for ( k=1;k<=n-r;k++)
    {
        nrFact=nrFact*k;
    }
    nCr = nFact/(rFact*nrFact);
    printf("\n%dC%d=%d",n,r,nCr);
    // printf("\n\n%d",nFact);
    // printf("\n\n%d",rFact);
    // printf("\n\n%d",nrFact);
    return 0;
}