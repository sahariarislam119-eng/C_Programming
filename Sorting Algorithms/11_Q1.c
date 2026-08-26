#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int i,j,n,k=0;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // Insertion Sort Approtch

    // for(i=1;i<n;i++)
    // {
    //     for(j=i;j>0;j--)
    //     {
    //         if(arr[j]!=0 && arr[j-1]==0)
    //         swap(&arr[j],&arr[j-1]);
    //     }
    // }

    // Bubble Sort Approtch

    // for(i=0;i<n-1;i++)
    // {
    //     for(j=0;j<n-1-i;j++)
    //     {
    //         if(arr[j]!=0 && arr[j-1]==0)
    //         swap(&arr[j],&arr[j-1]);
    //     }
    // }

    // Bubble Sort Approtch
    
    // for(i=0;i<n-1;i++)
    // {
    //     for(j=0;j<n-1-i;j++)
    //     {
    //         if(arr[j]==0)
    //         swap(&arr[j],&arr[j+1]);
    //     }
    // }

    // Optimized Approtch No need of loop in loop.
    for(i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    while(k < n)
    {
        arr[k] = 0;
        k++;
    }

    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
} 