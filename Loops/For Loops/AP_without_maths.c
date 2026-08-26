#include<stdio.h>
int main()
{
    int i,n,a=4;
    printf("Enter number of terms n : ");
    scanf("%d",&n);
    printf("The A.P till %d terms : ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}