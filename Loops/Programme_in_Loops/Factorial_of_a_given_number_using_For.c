#include<stdio.h>
int main()
{
    int x,i,n,factorial=1;
    printf("\nEnter a Number : ");
    scanf("%d",&n);
    x=n;
    for ( i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d.",x,factorial);
    return 0;
}  