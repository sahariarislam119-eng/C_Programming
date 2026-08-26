#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum-i;
        else
        sum=sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}