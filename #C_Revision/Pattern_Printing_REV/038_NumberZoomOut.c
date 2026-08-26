#include<stdio.h>
int main()
{
    int i,j,k,n,min,a,b;
    printf("\nEnter no of rows: ");
    scanf("%d",&n);
    min=0;
    for(i=1;i<=2*n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            a=i;
            if(i>n)
            {
                a=2*n-i;
            }
            b=j;
            if(b>n)
            {
                b=2*n-j;
            }
            if(a<b)
            {
                min=a;
            }
            else
            {
                min=b;
            }
            printf("%d ",min);
        }
        printf("\n");
    }
    return 0;
}