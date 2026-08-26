#include<stdio.h>
int main()
{
    int n,i,j,k,x,pairs=0;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to compare: ");
    scanf("%d",&x);
    for(j=0;j<n;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(arr[j]+arr[k]==x)
            {
                printf("\nPair = (%d,%d)",arr[j],arr[k]);
                pairs++;
            }
        }
    }
    printf("\nNo of pairs = %d.\n",pairs);
    return 0;
}