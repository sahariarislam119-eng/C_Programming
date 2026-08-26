#include<stdio.h>
int MAX(int a, int b)
{
    if(a>b) return a;
    return b;
}
int main()
{
    int i,n,j,max,temp;
    printf("\nEnter number of therms of array: ");
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<=n-1;j++)
    {
        printf("\nEnter %d th term of array: ",j);
        scanf("%d",&arr[j]);
    }
    max = arr[0];
    for(i=1;i<n;i++)
    {
        max=MAX(max,arr[i]);
    }
    printf("\nThe max element in the array is %d. \n",max);
    return 0;
}