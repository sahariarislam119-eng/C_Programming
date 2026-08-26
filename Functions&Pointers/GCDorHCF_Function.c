#include<stdio.h>

int  min(int x,int y)
{
    if (x>y) return y;
    else return x;
}

int gcd(int a, int b)
{
    int hcf,i;
    for(i=1;i<=min(a,b);i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}

int main()
{
    int a,b,x;
    printf("\nEnter a = ");
    scanf("%d",&a);
    printf("\nEnter b = ");
    scanf("%d",&b);
    x=gcd(a,b);
    printf ("\nThe HCF/GCD between %d and %d is %d.",a,b,x);
    return 0;
}