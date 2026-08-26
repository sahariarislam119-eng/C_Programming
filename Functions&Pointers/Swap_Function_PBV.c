#include<stdio.h>
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    //return x;
    b=temp;
    //return y;
    return;
}
int main()
{
    int a,b;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nBefore swaping a=%d,b=%d",a,b);
    swap(a,b);
    printf("\n\nAfter  swaping a=%d,b=%d",a,b);
    return 0;
}
