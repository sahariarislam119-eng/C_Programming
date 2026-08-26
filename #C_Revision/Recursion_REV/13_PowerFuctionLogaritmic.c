#include<stdio.h>
int POW(int a,int b)
{
    if(b==0) return 1;
    // if(b==1) return a;
    int x=POW(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
int main()
{
    int base,power;
    printf("\nEnter base: ");
    scanf("%d",&base);
    printf("\nEnter power: ");
    scanf("%d",&power);
    printf("\n%d raised to the power %d = %d.\n",base,power,POW(base,power));
    return 0;
}