#include<stdio.h>
int main()
{
    int i,j,k,l,r,b;
    printf("\nEnter Number of Rows : ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf("  ");
        }

        char ch = (char) 65;
        for(k=1;k<=i;k++)
        {
            printf("%c ",ch);
            ch++;
        }

        b=i-1;
        char chh = (char) b+64;
        for(l=1;l<=i-1;l++)
        {
            printf("%c ",chh);
            chh--;
        }

        printf("\n");
    }
    return 0;
}  