#include<stdio.h>
int main()
{
    int n,i,a=1,b=1,sum=0;
    printf("\nNumber of terms : ");
    scanf("%d",&n);
    printf("\nThe first %d terms of fibonacci series are 1 1 ",n);
    for ( i = 1; i <= n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}