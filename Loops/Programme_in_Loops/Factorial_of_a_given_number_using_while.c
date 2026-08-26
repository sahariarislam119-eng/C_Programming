#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("\nEnter a Number : ");
    scanf("%d",&i);
    n=i;
    while (n>0)
    {
      factorial=factorial*n;
      n=n-1;
    }
    printf("The factorial of %d is %d.",i,factorial);
    return 0;
} 