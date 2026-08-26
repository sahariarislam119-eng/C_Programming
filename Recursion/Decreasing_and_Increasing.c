#include<stdio.h>

void fun(int a)
{
    if (a==0) return;
    printf("%d\n",a);
    fun(a-1);
    printf("%d\n",a);
    return;
}

int main()
{
    int n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    fun(n);
    return 0;
}