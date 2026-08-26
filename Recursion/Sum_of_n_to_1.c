#include<stdio.h>

int Sum(int n)
{
    if(n==0||n==1) return n;
    else return n+Sum(n-1);
}

int main()
{
    int n,sum;
    printf("\nEnter n : ");
    scanf("%d",&n);
    sum=Sum(n);
    printf("Sum of %d to 1 = %d",n,sum);
    return 0;
}
