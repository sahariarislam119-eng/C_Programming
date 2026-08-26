#include<stdio.h>
int main()
{
    int i,j,r;
    printf("\nEnter odd number : ");
    scanf("%d",&r);
    if (r%2!=0) r=r;
    else 
    {
        printf("\n%d is not an odd number.",r);
        printf("\n");
        printf("Enter odd number : ");
        scanf("%d",&r);
    }
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=r;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            if ( j==(r/2)+1 || i==(r/2)+1)  printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
} 