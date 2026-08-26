#include<stdio.h>
int main()
{
     long count=0,i,n;
     printf("\nEnter a Number : ");
     scanf("%ld",&n);
     for ( i=n; i!=0 ; i=i/10)
     {
        count++;
     }
     printf("The total number of digits in the number %ld is %ld.",n,count);
    return 0;
} 