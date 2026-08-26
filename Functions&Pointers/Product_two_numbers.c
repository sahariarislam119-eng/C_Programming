#include<stdio.h>
int product(int a, int b)
{
    return a*b;
}
int main()
{
    int a,b,pro;
    printf("\nEnter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    pro = product(a,b);
    printf("\nSum=%d",pro); 
    return 0;
}  