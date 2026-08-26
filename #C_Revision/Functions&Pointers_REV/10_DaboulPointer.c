#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a: ");
    scanf("%d",&a);
    int *x=&a;
    printf("%p",x);// Here x stores the address of a;
    printf("\n%d",*x); // Here *x stores the value of a;
    int **y=&x;
    printf("\n%p",&x);// Address of x;
    printf("\n%p",y);// Here y stores the address of pointer x;
    printf("\n%d",**y);// Here **y stores the value of a;
    return 0;
}