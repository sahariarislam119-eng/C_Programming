#include<stdio.h>
int main()
{
    int n,i,j,k,even=0,odd=0;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }

    for(k=0;k<n;k++)
    {
        if(k%2==0) even+=arr[k];
        else odd+=arr[k];
    }
    printf("\nThe difference = %d.\n",even-odd);
    return 0;
}