#include<stdio.h>
int main()
{
    int n,a=0,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(n==1)
    printf("1 is nither prime nor composite.");
    else if(a==0)
    printf("%d is Prime.",n);
    else
    printf("%d is not Prime.",n);
    return 0;
}