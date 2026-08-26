#include<stdio.h>
int main()
{
    int i,j,k,l,s,r,nsp=1;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    char ch = (char) 65;
    for(s=1;s<=2*r-1;s++)
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
    for (i=1;i<=r-1;i++) 
    {
        char chh = (char) 65;
        for (j=1;j<=r-i;j++)  
        {
            printf("%c ",chh);
            chh++;
        }
        for(k=1;k<=nsp;k++)
        {
            printf("  ");
            chh++;
        }
        for(l=1;l<=r-i;l++)
        {
            printf("%c ",chh);
            chh++;
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}  