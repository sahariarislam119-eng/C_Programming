#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b,sum;
    printf("\nEnter first number : ");
    scanf("%d",&a);
    printf("\nEnter second number : ");
    scanf("%d",&b);
    sum = add(a,b);
    printf("\nSum=%d",sum); 
    return 0;
} 