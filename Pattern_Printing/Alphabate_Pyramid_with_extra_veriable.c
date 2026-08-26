#include<stdio.h>
int main()
{
    int i,j,k,r,nal=1,nsp;
    printf("\nEnter Number of Rows : ");
    scanf("%d",&r);
    nsp=r-1;
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        nsp=nsp-1;

        char ch = (char)65;
        for (k=1;k<=nal;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        nal=nal+2;
        
        printf("\n");
    }
    return 0;
}