#include<stdio.h>
int power(int a,int b)
{
    int ans=1,i;
    for(i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    int n,num,i,a,count=0,j,sum=0,ld;
    printf("\nEnter number: ");
    scanf("%d",&n);
    num=n;
    a=n;
    for(i=n;i>0;i=i/10)
    {
        count++;
    }
    printf("Digit count: %d",count);

    while(num>0)
    {
        ld=num%10;
        sum=sum+power(ld,count);
        num=num/10;
    }
    if(a==sum)
    printf("\nThe number %d is an Armstrong Number.",a);
    else
    printf("\nThe number %d is not an Armstrong Number.",a);
    return 0;
}