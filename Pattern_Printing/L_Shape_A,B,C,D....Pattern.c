#include<stdio.h>
int main()
{
    int i,j,r;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        char ch = (char) 65;
        for (j=1;j<=i;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}