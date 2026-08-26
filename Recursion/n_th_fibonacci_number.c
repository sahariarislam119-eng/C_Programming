#include<stdio.h>
void fibo(int n)
{
    int a=1,b=1,sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
}
int main()
{
    int a,b,sum,n;
    printf("Enter n: ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}