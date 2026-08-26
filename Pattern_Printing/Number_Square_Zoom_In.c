#include<stdio.h>
int main()
{
  int i,j,k,l,n,min=0,a,b;
  printf("\nEnter a Number : ");
  scanf("%d",&n);
  for(i=1;i<=2*n-1;i++)
  {
    for(j=1;j<=2*n-1;j++)
    {
        a=i;
        if(i>n) a=2*n-i;
        b=j;
        if(j>n) b=2*n-j;
        
        if(a>b) min=b;
        else min=a;
        printf("%d ",n+1-min);
    }
    printf("\n");
  }
  return 0;
}