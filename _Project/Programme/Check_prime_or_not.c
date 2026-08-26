#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
    }
    if (n==1)
    {
        printf("1 is nither prime nor composit.");
    }
    else if (a==0)
    {
        printf("The given number %d is a prime number.",n);
    }
    else
    {
        printf("The given number %d is a composit number.",n);
    }
    return 0;
}