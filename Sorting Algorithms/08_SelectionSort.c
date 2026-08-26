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
    int i,j,n,min,minIdx;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Sorting
    for(j=0;j<n-1;j++)
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
    

    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}