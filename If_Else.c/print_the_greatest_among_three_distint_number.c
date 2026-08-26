#include<stdio.h>
int main()
{
    int a;
    printf("Enter first integer : ");
    scanf("%d",&a);
    int b;
    printf("Enter second integer : ");
    scanf("%d",&b);
    int c;
    printf("Enter third integer : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("The greatest integer is : %d",a);
    }
    if(b>a && b>c)
    {
        printf("The greatest integer is : %d",b);
    }
    if(c>a && c>b)
    {
        printf("The greatest integer is : %d",c);
    }
    return 0;
}