#include<stdio.h>
int main()
{
   int i,n,sum=0,ldd;
   printf("\nEnter a Number : ");
   scanf("%d",&i);
   n=i;
   while (n!=0)
   {
      ldd=n%10;
      sum=sum+ldd;
      n=n/10;
   }
    printf("The sum of the digits of the number %d is %d.",i,sum);
    return 0;
}