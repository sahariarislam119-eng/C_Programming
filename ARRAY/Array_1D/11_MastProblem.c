#include<stdio.h>
int main()
{
    int n,i,j,k;
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
        if(k%2==0) arr[k]+=10;
        else arr[k]*=2;
    }

    for(j=0;j<n;j++)
    {
        printf("\nThe %dth element = %d. ",j,arr[j]);
    }
    return 0;
}