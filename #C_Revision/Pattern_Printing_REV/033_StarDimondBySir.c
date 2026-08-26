#include<stdio.h>
int main()
{
    int i,j,k,ml,nsp,nst,n;
    printf("\nEnter no of rows(ODD): ");
    scanf("%d",&n); 
    if(n%2!=0)
    {
        n=n; 
    } 
    else 
    { 
        printf("\n!Invalid Input!\nEnter only odd number."); 
        printf("\nEnter no of rows(ODD): "); 
        scanf("%d",&n); 
    }
    ml=n/2+1;
    nsp=n/2;
    nst=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        for(k=1;k<=nst;k++)
        {
            printf("* ");
        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}