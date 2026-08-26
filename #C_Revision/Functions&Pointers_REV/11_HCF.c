#include<stdio.h>
int min(int x, int y)
{
    if(x>y) return y;
    else return x;
}
int hcf(int x,int y)
{
    int i,a;
    for(i=min(x,y);i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            a=i;
            break;
        }
    }
    // for(i=1;i<=min(x,y);i++)
    // {
    //     if(x%i==0 && y%i==0)
    //     a=i;
    // }
    return a;
}
int main()
{
    int a,b,ans;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    ans=hcf(a,b);
    printf("\nHCF is %d.",ans);
    return 0;
}