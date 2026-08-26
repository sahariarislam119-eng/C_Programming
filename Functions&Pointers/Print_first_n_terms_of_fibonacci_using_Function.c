#include<stdio.h>

int fibonacci(int a)
{
    int i,x=1,y=1,sum=0;
    printf("The first %d terms of fibonacci series are 1 1 ",a);
    for(i=1;i<=a-2;i++)
    {
        sum=x+y;
        x=y;
        y=sum;
        printf("%d ",sum);
    }
    return sum;
}

int main()
{
    int a,fib;
    printf("\nEnter n : ");
    scanf("%d",&a);
    fib=fibonacci(a);
    return 0;
}