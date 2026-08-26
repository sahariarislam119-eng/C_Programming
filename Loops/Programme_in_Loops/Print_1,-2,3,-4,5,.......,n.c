#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);

    // By using for loop
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
            sum=sum-i;
        else
            sum=sum+i;      
    }

    // By using maths
    if (n%2==0)
    {
        sum=-(n/2);
    }
    else
    {
        sum=-((n-1)/2)+n;
    }
    printf("\nThe sum of the series 1-2+3-4+5-6..... upto %d terms = %d.",n,sum);
    return 0;
}