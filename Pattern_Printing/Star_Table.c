#include<stdio.h>
int main()
{
    int i,j,k,l,s,r,nsp=1;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for(s=1;s<=2*r-1;s++)
    {
        printf("* ");
    }
    printf("\n");
    for (i=1;i<=r-1;i++) 
    {
        for (j=1;j<=r-i;j++)  
        {
            printf("* ");
        }
        for(k=1;k<=nsp;k++)
        {
            printf("  ");
        }
        for(l=1;l<=r-i;l++)
        {
            printf("* ");
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
} 