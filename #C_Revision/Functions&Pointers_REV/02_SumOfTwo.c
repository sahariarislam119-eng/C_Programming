#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,sum;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("\nSum = %d",sum);
    return 0;
}