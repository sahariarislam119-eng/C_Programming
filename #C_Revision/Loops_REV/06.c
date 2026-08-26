#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n)
    {
        printf("%d ",i);
    }
    return 0;
}