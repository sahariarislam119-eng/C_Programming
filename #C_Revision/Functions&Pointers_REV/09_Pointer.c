#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a: ");
    scanf("%d",&a);
    int *x=&a;
    printf("%p",x);// Here x stores the address of a;
    printf("\n%d",*x); // Here *x stores the value of a;
    return 0;
}