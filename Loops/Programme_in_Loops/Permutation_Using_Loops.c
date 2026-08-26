#include<stdio.h>
int main()
{
    int n,r,i,j,nPr;
    printf("\nEnter n :");
    scanf("%d",&n);
    printf("\nEnter r :");
    scanf("%d",&r);
    int nFact=1; //n!
    int nrFact=1; //(n-r)!
    for ( i=1;i<=n;i++)
    {
        nFact=nFact*i;
    }
    for ( j=1;j<=(n-r);j++)
    {
        nrFact=nrFact*j;
    }
    nPr = nFact/nrFact;
    printf("\n%dP%d=%d",n,r,nPr);
    // printf("\n\n%d",nFact);
    // printf("\n\n%d",nrFact);
    return 0;
}