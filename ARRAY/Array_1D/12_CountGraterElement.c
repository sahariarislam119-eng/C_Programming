#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to compare: ");
    scanf("%d",&k);
    for(j=0;j<n;j++)
    {
        if(arr[j]>k) count++;
    }
    printf("\nNumber of elements present in the array which are grater than %d = %d. \n",k,count);
    return 0;
}