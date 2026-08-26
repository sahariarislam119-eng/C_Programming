#include<stdio.h>
int main()
{
    int i,j,k,r;
    printf("\nEnter numbrr of rows : ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf("  ");
        }

        char ch = (char)65;
        for(k=1;k<=2*i-1;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}