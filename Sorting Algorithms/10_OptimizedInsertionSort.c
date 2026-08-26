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
    int i,j,n;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Sorting algo by sir
    for(i=1;i<n;i++)
    {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1])
        {
          swap(&arr[j],&arr[j-1]);
          j--;  
        }
    }

    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}