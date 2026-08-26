#include<stdio.h>
int main()
{
    int i,n,a=1,b=1,sum=0;
    printf("\nEnter number: ");
    scanf("%d",&n);
    printf("The 1st fibonacci term is: 1\n");
    printf("The 2nd fibonacci term is: 1\n");
    for(i=1;i<=n-2;i++)
    {
        sum=a+b;
        if(i==1)
        printf("The 3rd fibonacci term is: %d\n",sum);
        else
        printf("The %dth fibonacci term is: %d\n",i+2,sum);
        a=b;
        b=sum;
    }
    return 0;
}