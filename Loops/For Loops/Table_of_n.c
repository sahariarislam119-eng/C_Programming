#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter which number's table you want : ");
    scanf("%d",&n);
    printf("The table of %d is : ",n);
    for ( i = n; i <= n*10; i=i+n)
    {
        printf("%d ",i);
    }
    return 0;
} 