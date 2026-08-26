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
int permutation(int n,int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    int n,r,ans;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("\nEnter r: ");
    scanf("%d",&r);
    ans=permutation(n,r);
    printf("\nNpR is: %d",ans);
    return 0;
}