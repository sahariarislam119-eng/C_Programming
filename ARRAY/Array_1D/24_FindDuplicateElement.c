#include<stdio.h>
int main()
{
    int n,i,j,k,duplicate=0;
    printf("\nEnter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(arr[j]==arr[k])
            {
                printf("\nDuplicate element = %d",arr[j]);
                duplicate++;
            }
        }
    }
    printf("\nNo of duplicate elements = %d.\n",duplicate);
    return 0;
}