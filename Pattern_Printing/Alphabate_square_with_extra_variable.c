#include<stdio.h>
int main()
{
    int i,j,r;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        int a=1;
        for (j=1;j<=r;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            int d=a+64;
            char ch = (char) d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}