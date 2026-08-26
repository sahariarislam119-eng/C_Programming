#include<stdio.h>
int main()
{
    int a;
    printf("Enter first side : ");
    scanf("%d",&a);
    int b;
    printf("Enter second side : ");
    scanf("%d",&b);
    int c;
    printf("Enter third side : ");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("The three numbers %d , %d and %d are three sides of a triangle",a,b,c);
    }
    else
    {
        printf("The three numbers %d , %d and %d are not three sides of a triangle",a,b,c); 
    }
    return 0;
}