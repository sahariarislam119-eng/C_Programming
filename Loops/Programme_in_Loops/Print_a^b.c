#include<stdio.h>
int main()
{
    int a,b,sum=1,i;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {
        sum=sum*a;
        printf("\n%d raised to the power %d = %d",a,i,sum);
    }
    printf("\n%d raised to the power %d = %d",a,b,sum);
    return 0;
}