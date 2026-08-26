#include<stdio.h>
int main()
{
    int i,n,a=3;
    printf("Enter number of terms n : ");
    scanf("%d",&n);
    printf("The G.P till %d terms : ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}