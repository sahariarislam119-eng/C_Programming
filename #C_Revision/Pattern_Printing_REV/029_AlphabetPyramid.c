#include<stdio.h>
int main()
{
    int i,j,k,n,a;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=65;
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}