#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter element to search: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("The element in array at %dth index.",i);
            return 0;
        }
    }
    printf("The element is not present in array.");
    return 0;
}