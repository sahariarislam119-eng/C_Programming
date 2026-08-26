#include<stdio.h>
int main()
{
    int i,n,j=1;
    printf("\nEnter number of therms of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++)
    {
        printf("\nEnter %d th term of array: ",i);
        scanf("%d",&arr[i]);
        j=j*arr[i];
    }
    printf("\nThe product of all elements = %d.\n",j);
    return 0;
}