#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nBefore swaping a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nAfter  swaping a=%d,b=%d",a,b);
    return 0;
}