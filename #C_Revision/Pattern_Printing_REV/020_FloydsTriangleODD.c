#include<stdio.h>
int main()
{
    int n,i,j,a=1;
    printf("\nEnter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            if(a%2!=0)
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}