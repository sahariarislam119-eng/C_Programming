#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=65;
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                char ch=(char)a;
                printf("%c ",ch);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}