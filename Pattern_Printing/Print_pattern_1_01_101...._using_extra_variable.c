#include<stdio.h>
int main()
{
    int i,j,r,a;
    printf("\nEnter number of rows : ");
    scanf("%d",&r);
    for (i=1;i<=r;i++) // First loop -> (number of rows).
    {
        if(i%2!=0) a=1;
        else a=0;
        for (j=1;j<=i;j++)  // Second loop -> (number of columns).
        {
            printf("%d ",a);
            if(a==0) a=1;
            else a=0; 
        }
        printf("\n");
    }
    return 0;
}