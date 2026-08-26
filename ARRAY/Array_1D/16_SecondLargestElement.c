#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,j,k,max,smax;
    printf("\nEnter number of therms of array: ");
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<=n-1;j++)
    {
        printf("\nEnter %d th term of array: ",j);
        scanf("%d",&arr[j]);
    }
    max = INT_MIN;
    smax = INT_MIN;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(k=0;k<n;k++)
    {
        if(max!=arr[k]&&smax<arr[k])
        smax=arr[k];
    }
    printf("\nThe 2nd largest element in the array is %d. \n",smax);
    return 0;
}