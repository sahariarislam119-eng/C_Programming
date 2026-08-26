#include<stdio.h>

int factorial(int a)
{
    int i,x;
    x=1;
    for(i=1;i<=a;i++)
    {
        x=x*i;
        printf("The factorial of %d = %d.\n",i,x);
    }
    return x;
}

int main()
{
    int x,fact;
    printf("\nEnter Number : ");
    scanf("%d",&x);
    fact=factorial(x);
    return 0;
}