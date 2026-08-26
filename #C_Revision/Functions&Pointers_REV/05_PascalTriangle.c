#include<stdio.h>
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int i,j,k,n;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=n-1-i;k>0;k--)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}