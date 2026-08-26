#include<stdio.h>
int main()
{
    int i,n,a=1;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",a);
        a*=2;
    }
    return 0;
}