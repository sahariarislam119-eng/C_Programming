#include<stdio.h>
int main()
{
    int a,b,ans=1,i;
    printf("\nWe have to clculate a^b.");
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    printf("\n%d to the power %d is %d.",a,b,ans);
    return 0;
}