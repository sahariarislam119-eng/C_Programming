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
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            Min1 = Min1*10 + arr[i];
        else
            Min2 = Min2*10 + arr[i];
    }
    printf("First number = %d\n", Min1);
    printf("Second number = %d\n", Min2);
    printf("Sum = %d\n", Min1 + Min2);
    return 0;
}