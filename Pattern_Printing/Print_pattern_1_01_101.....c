#include<stdio.h>
int main()
{
    int i,j,r;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++) // First loop -> (number of rows).
    {
        for (j=1;j<=i;j++)  // Second loop -> (number of columns).
        {
            if((i+j)%2==0)
            printf("1 ");
            else
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}