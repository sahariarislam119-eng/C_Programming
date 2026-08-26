#include<stdio.h>
void swap(int* a, int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int a,b,temp;
    printf("\nEnter a : ");
    scanf("%d",&a);
    int* ptrA = &a;
    printf("\nEnter b : ");
    scanf("%d",&b);
    int* ptrB = &b;
    printf("\nBefore swaping a=%d,b=%d",a,b);
    swap(ptrA,ptrB);
    printf("\n\nAfter  swaping a=%d,b=%d",a,b);
    return 0;
}
