#include<stdio.h>
void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;
}
int main()
{
    int a,b;
    printf("\nEnter a: ");
    scanf("%d",&a);
    printf("\nEnter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\na=%d ,b=%d",a,b);
    return 0;
}