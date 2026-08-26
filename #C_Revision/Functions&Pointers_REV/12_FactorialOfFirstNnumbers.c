#include<stdio.h>
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("\nThe Factorial of %d is %d.",i,fact);
    }
    return fact;
}
int main()
{
    int n,fact;
    printf("\nEnter n: ");
    scanf("%d",&n);
    fact=factorial(n);
    return 0;
}