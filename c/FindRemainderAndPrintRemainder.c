#include<stdio.h>
int main()
{
    int a,b; // a>b
    printf("Enter The Divident :");  // Divisor(b)*Quocent(q)+Remainder(r)=Divident(a)
    scanf("%d",&a);
    printf("Enter The Divisor :");   // r=a-(b*q)
    scanf("%d",&b);
    int q=a/b;
    int r=a-b*q;
    printf("The Quocent is :%d",q);
    printf("\nThe Remainder when %d is devided by %d is : %d",a,b,r);
    return 0;
}