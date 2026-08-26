#include<stdio.h>
int main()
{
    int i,j,k,l,s,r,nsp=1,x;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for(s=1;s<=2*r-1;s++)
    {
        printf("%d ",s);
    }
    printf("\n");
    for (i=1;i<=r-1;i++) 
    {
        x=1;
        for (j=1;j<=r-i;j++)  
        {
            printf("%d ",x);
            x++;
        }
        for(k=1;k<=nsp;k++)
        {
            printf("  ");
            x++;
        }
        for(l=1;l<=r-i;l++)
        {
            printf("%d ",x);
            x++;
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}   