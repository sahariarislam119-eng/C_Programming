#include<stdio.h>
int main()
{
    int i,j,n,sum=0,real,x;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    real=(n*(n+1))/2;
    if(sum-real>=real-sum) x=sum-real;
    else x=real-sum;
    printf("\n%d is repeating.",x);
    return 0;
}