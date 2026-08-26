#include<stdio.h>
int main()
{
  int i,n,rev=0,sum;
  printf("\nEnter a Number : ");
  scanf("%d",&i);
  n=i;
  while (n>0)
  {
     rev=rev*10; 
     rev=rev+(n%10);
     n=n/10;
  }
  printf("\nThe reverse of the number %d is %d.",i,rev);
  sum=i+rev;
  printf("\n");
  printf("The sum of the number %d and its reversed number %d is %d.",i,rev,sum);
  return 0;
}