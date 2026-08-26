#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("\nEnter no of elements of array: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d th term of array1: ",i);
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<n;j++)
    {
        arr2[j]=arr1[n-j-1];
    }
    for(k=0;k<n;k++)
    {
        printf("\nThe %dth element of array2 = %d. ",k,arr2[k]);
    }
    return 0;
} 