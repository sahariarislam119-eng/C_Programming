#include<stdio.h>
int main()
{
    int i,n,a=100;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}