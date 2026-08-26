#include<stdio.h>

void nto1(int a)
{
    if (a==0) return;
    nto1(a-1);
    printf("%d\n",a);
    return;
}

int main()
{
    int n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    nto1(n);
    return 0;
}