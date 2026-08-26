#include<stdio.h>
int main()
{
    int i,j,r,x;
    printf("\nEnter odd number : ");
    scanf("%d",&r);
    if (r%2!=0) r=r;
    else 
    {
        for (x=0;x<=100;x++)
        {
            printf("\n%d is not an odd number.",r);
            printf("\n\nEnter odd number : ");
            scanf("%d",&r);
            if(r%2!=0)
            {
                break;
            }
        }
    }
    for (i=1;i<=r;i++) // First loop -> Number of lines (number of rows).
    {
        for (j=1;j<=r;j++)  // Second loop -> Number of stars in each line (number of columns).
        {
            if ( i==j || i+j==r+1 )  printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}  