#include<stdio.h>
void reverse(int n, int a[])
{
    // int i=0, j=n-1,temp;
    // while(i<j)
    // {
    //     temp=a[i];
    //     a[i]=a[j];
    //     a[j]=temp;
    //     i++;
    //     j--;
    // }
    int i,j,temp;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return;
}
int main()
{
    int i,j,k,n;
    printf("\nEnter no of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d th term of array: ",i);
        scanf("%d",&arr[i]);
    }
    reverse(n,arr);
    for(j=0;j<n;j++)
    {
        printf("\nThe %dth element of array = %d. ",j,arr[j]);
    }
    return 0;
}