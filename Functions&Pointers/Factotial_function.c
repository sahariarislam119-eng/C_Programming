#include<stdio.h>

int factorial(int a)
{
    int i,x;
    x=1;
    for(i=1;i<=a;i++)
    {
        x=x*i;
    }
    return x;
}

int main()
{
    int i,x,fact;
    printf("\nEnter Number : ");
    scanf("%d",&x);
    fact=factorial(x);
    printf("The factorial of %d is %d.",x,fact);
    return 0;
}