#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter no of rows(ODD): ");
    scanf("%d",&n);
    if(n%2!=0)
    {
        n=n;
    }
    else
    {
        printf("\n!Invalid Input!\nEnter only odd number.");
        printf("\nEnter no of rows(ODD): ");
        scanf("%d",&n);
    }
    for(i=1;i<=n;i++)
    {
        if(i==n/2+1)
        {
            for(j=1;j<=n;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j=1;j<=n/2;j++)
            {
                printf("  ");
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}