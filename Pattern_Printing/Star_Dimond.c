#include<stdio.h>
int main()
{
    int i,j,k,r,nst=1,nsp,ml,x;
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
    nsp=r/2;
    ml=r/2+1;
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=nsp;j++)
        {
            printf("  ");
        }
        
        for (k=1;k<=nst;k++)
        {
            printf("* ");
        }

        if(i<ml)
        {
            nsp--;
            nst=nst+2;
        }
        else
        {
            nsp++;
            nst=nst-2;
        }
        
        printf("\n");
    }
    return 0;
}
