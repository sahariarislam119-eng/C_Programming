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
int main()
{
    int n,r,nCr,nFact,rFact,nrFact;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nEnter r : ");
    scanf("%d",&r);

    nFact=fact(n); //n!
    rFact=fact(r); //r!
    nrFact=fact(n-r); //(n-r)!
    
    nCr = nFact/(rFact*nrFact);
    printf("\n%dC%d=%d",n,r,nCr);
    // printf("\n\n%d",nFact);
    // printf("\n\n%d",rFact);
    // printf("\n\n%d",nrFact);
    return 0;
}
