#include<stdio.h>
int main()
{
    int i,j,n,target;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter in ascending order.\n");
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter target: ");
    scanf("%d",&target);
    i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]==target) 
        {
            printf("The elements are %d and %d.",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>target) j--;
        else  i++;
    }
    return 0;
}