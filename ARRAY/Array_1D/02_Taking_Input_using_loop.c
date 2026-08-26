#include<stdio.h>
int main()
{
    int i,n,j;
    printf("\nEnter number of therms of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        printf("\nEnter %d th term of array: ",i);
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("\nThe %dth element = %d. ",j,arr[j]);
    }
    return 0;
}