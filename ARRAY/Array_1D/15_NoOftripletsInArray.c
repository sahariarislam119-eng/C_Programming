#include<stdio.h>
int main()
{
    int n,i,j,k,l,x,triplet=0;
    printf("\nEnter no of elements in array: ");
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
            for(l=k+1;l<n;l++)
            {
                if(arr[j]+arr[k]+arr[l]==x)
                {
                    printf("\nTriplet = (%d,%d,%d)",arr[j],arr[k],arr[l]);
                    triplet++;
                }
            }
        }
    }
    printf("\nNo of triplet = %d.\n",triplet);
    return 0;
}