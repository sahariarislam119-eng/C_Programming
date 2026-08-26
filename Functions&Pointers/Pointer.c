#include<stdio.h>
int main()
{
    int a=5;
    int* ptr;
    ptr = &a;
    printf("Before Changing a=%d\n",a);
    *ptr=25;
    printf("%p\n",ptr);//Address of a
    printf("%p\n",&ptr);//Address of ptr
    printf("After changing a=%d",*ptr);//changes the value of a

    return 0;
}