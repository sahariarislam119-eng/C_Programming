#include<stdio.h>
int sum(int n)
{
    if(n==0) return 0;
    return n+sum(n-1);
}
int main()
{
    int n,s;
    printf("\nEnter n: ");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum of 1 to %d is %d.",n,s);
    return 0;
}