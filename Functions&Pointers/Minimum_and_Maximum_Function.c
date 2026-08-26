#include<stdio.h>
int  minimum(int x,int y)
{
    if (x>y) return y;
    else return x;
}
int  maximum(int x,int y)
{
    if (x>y) return x;
    else return y;
}
int main()
{
    int a,b,min,max;
    printf("\nEnter a number : ");
    scanf("%d",&a);
    printf("\nEnter another number : ");
    scanf("%d",&b);
    min= minimum(a,b);
    max= maximum(a,b);
    printf("\nThe minimum among %d and %d is %d.",a,b,min);
    printf("\n\nThe maximum among %d and %d is %d.",a,b,max);
    return 0;
}