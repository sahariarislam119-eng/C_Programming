#include<stdio.h>
int main()
{
    int i,j,k,r;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=r-i;j++)  // Second loop -> Number of spaces in each line (number of columns).
        {
            printf("  ");
        }

        char ch = (char) 65;    
        for (k=1;k<=i;k++)  // Third loop -> Number of stars in each line (number of columns).
        {
            printf("%c ",ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
} 