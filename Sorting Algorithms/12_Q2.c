#include<stdio.h>
#include<limits.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int i,j,n,min,minIdx,k;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter k: ");
    scanf("%d",&k);

    for(j=0;j<=n-k;j++)
    {
        min=INT_MAX;
        for(i=j;i<n;i++)
        {
            if(arr[i]<min) 
            {
                min=arr[i];
                minIdx=i;
            }
        }
        if(arr[j]>min) swap(&arr[j],&arr[minIdx]);
    }
    
    printf("\nThe %dth smallest element = %d",k,arr[n-k]);
    return 0;
}