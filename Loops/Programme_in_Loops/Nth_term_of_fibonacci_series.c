#include<stdio.h>
int main()
{
    int n,i,a=1,b=1,sum=0;
    printf("\nNumber of term : ");
    scanf("%d",&n);
    for ( i = 1; i <= n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth term of fibonacci series is %d.",n,sum);
    return 0;
}   