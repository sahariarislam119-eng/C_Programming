#include<stdio.h>
#include<limits.h>
void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int i,j,n,min,minIdx,Min1=0,Min2=0;
    printf("\nEnter n: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min=INT_MAX;
        for(j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                minIdx=j;
            }
        }
        if(arr[i]>min)
        swap(&arr[i],&arr[minIdx]);
    }

    // First minimum number
    for(i=0;i<n;i++)
    {
        Min1=(Min1*10)+arr[i];
    }
    printf("\nFirst minimum number = %d.",Min1);

    // Second minimum number
    for(i=n-1;i>=1;i--)
    {
        if(arr[i]!=arr[i-1])
        {
            swap(&arr[i],&arr[i-1]);
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        Min2=(Min2*10)+arr[i];
    }
    printf("\nSecond minimum number = %d.",Min2);

    printf("\nThe sum of first two minimum numbers formed from the array = %d.\n",Min1+Min2);
    return 0;
}