#include<stdio.h>
int AtoThePowerB(int a,int b)
{
    if(b==0) return 1;
    return a*AtoThePowerB(a,b-1);
}
int main()
{
    int a,b,x;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    x=AtoThePowerB(a,b);
    printf("\n%d to the power %d = %d.",a,b,x);
    return 0;
}