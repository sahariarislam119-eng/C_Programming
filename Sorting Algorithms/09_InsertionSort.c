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

    Sorting
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(&arr[j],&arr[j-1]);
        }
    }
    
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}