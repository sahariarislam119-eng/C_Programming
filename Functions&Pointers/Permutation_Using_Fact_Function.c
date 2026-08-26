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
    int n,r,nPr,nFact,nrFact;
    printf("\nEnter n : ");
    scanf("%d",&n);
    printf("\nEnter r : ");
    scanf("%d",&r);

    nFact=fact(n); //n!
    nrFact=fact(n-r); //(n-r)!
    
    nPr = nFact/nrFact;
    printf("\n%dP%d=%d",n,r,nPr);
    // printf("\n\n%d",nFact);
    // printf("\n\n%d",nrFact);
    return 0;
}
