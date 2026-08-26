#include<stdio.h>
int main()
{
    int i,n,j,min,temp;
    printf("\nEnter number of therms of array: ");
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<=n-1;j++)
    {
        printf("\nEnter %d th term of array: ",j);
        scanf("%d",&arr[j]);
    }
    min = arr[0];
    for(i=1;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    printf("\nThe max element in the array is %d. \n",min);
    return 0;
}