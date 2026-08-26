#include<stdio.h>
int ffibonacci(int n)
{
    int i,a=1,b=1,sum=0;
    printf("\nThe first %d terms of fibonacci series is : %d, %d, ",n,a,b);
    for(i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(i==n-2)
        printf("%d",sum);
        else
        printf("%d, ",sum);
    }
    return sum;
}
int main()
{
    int n,fibo;
    printf("\nEnter n: ");
    scanf("%d",&n);
    fibo=ffibonacci(n);
    return 0;
}