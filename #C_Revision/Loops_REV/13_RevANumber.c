#include<stdio.h>
int main()
{
    int n,a,b,i,num;
    printf("\nEnter number: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    return 0;
}