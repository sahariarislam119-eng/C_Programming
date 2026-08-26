#include<stdio.h>
int main()
{
    int n,i,a=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}