#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
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
    for(i=1;i<=n;i++)
    {
        if(i<=(n/2+1))
        {
            for(k=1;k<=(n/2)-i+1;k++)
            {
                printf("  ");
            }
            for(j=1;j<=2*i-1;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(l=1;l<=i-(n/2)-1;l++)
            {
                printf("  ");
            }
            for(m=1;m<=2*(n-i)+1;m++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}