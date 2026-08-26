#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("\nEnter a Number : ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
    {
        factorial=factorial*i;
        printf("The factorial of %d = %d.\n",i,factorial);
    }
    return 0;
} 