#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("The table of %d is : ",n);
    for(i=n;i<=n*10;i=i+n)
    {
        printf("%d ",i);
    }
    return 0;
}