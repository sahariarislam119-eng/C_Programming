#include<stdio.h>

int power(int b,int p)
{
    if(p==0) return 1;
    else return b*power(b,p-1);
}

int main()
{
    int b,p,pow;
    printf("\nEnter base: ");
    scanf("%d",&b);
    printf("Enter power: ");
    scanf("%d",&p);
    pow=power(b,p);
    printf("%d raised to the power %d is %d.",b,p,pow);
    return 0;
}
