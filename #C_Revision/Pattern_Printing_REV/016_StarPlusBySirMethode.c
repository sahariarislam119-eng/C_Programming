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
        for(j=1;j<=n;j++)
        {
            if(j==n/2+1 || i==n/2+1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}