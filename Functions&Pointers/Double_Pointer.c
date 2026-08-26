#include<stdio.h>
int main()
{
    int a=25;
    int* x=&a;
    int** y=&x;
    int*** z=&y;
    printf("\nAddress of a = %p\n",x);
    printf("\nAddress of X = %p\n",&x);
    printf("\nAddress of X = %p\n",y);
    printf("\nAddress of Y = %p\n",&y);
    printf("\nAddress of Y = %p\n",z);
    printf("\n%d",a);
    printf("\n%d",*x);
    printf("\n%d",**y);
    printf("\n%d",***z);
    return 0;
}

