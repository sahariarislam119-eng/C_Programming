#include<stdio.h>

void Sum(int n,int s)
{
    if(n==0) 
    {
        printf("%d",s);
        return;
    }
    Sum(n-1,s+n);
    return;
}

int main()
{
    int n,sum;
    printf("\nEnter n : ");
    scanf("%d",&n);
    Sum(n,0);
    return 0;
}

