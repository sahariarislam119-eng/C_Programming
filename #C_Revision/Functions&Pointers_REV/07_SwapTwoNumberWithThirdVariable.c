#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
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