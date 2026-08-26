#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,nst,nsp,x,a,b;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    x=n-1;
    nsp=1;
    nst=x;
    b=65;
    for(m=1;m<=2*x+1;m++)
    {
        char ch=(char)b;
        printf("%c ",ch);
        b++;
    }
    printf("\n");
    for(i=1;i<=x;i++)
    {
        a=65;
        for(j=1;j<=nst;j++)
        {
            
            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        for(k=1;k<=nsp;k++)
        {
            printf("  ");
            a++;
        }
        for(l=1;l<=nst;l++)
        {

            char ch=(char)a;
            printf("%c ",ch);
            a++;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}