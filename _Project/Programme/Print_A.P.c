#include<stdio.h>
int main()
{
    int i,n,a,d;
    printf("Enter first term a : ");
    scanf("%d",&a);
    printf("Enter common difference d : ");
    scanf("%d",&d);
    printf("Enter number of terms n : ");
    scanf("%d",&n);
    printf("The A.P till %d terms whose first term is %d and common difference is %d : ",n,a,d);
    for(i=a;i<=(a+((n-1)*d));i=i+d)
    {
        printf("%d ",i);
    }
    return 0;
}