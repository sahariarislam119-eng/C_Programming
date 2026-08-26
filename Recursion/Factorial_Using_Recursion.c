#include<stdio.h>

int factorial(int a)
{
    if (a==1 || a==0) return 1;
    else return a*factorial(a-1);
}

int main()
{
    int n,fact;
    printf("\nEnter n : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
