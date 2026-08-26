#include<stdio.h>
#include<stdbool.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int i,j,n,target;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Sorting
    for(i=0;i<n-1;i++)
    {
        bool flag = false;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if(flag==false) break;
    }

    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}