#include<stdio.h>
int main()
{
    int n,fact;
    printf("\nEnter n : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
    return 0;
}