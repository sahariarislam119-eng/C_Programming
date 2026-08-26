#include<stdio.h>
int main()
{
    int i,j,k,l,n,a,b;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=65;
        a=b+i-2;
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            char ch=(char)b;
            printf("%c ",ch);
            b++;
        }
        for(l=1;l<=i-1;l++)
        {
            char ch=(char)a;
            printf("%c ",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}