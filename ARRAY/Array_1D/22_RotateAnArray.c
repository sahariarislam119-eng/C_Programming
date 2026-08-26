#include<stdio.h>
void reverse(int si, int ei, int a[])
{
    int i,j,temp;
    for(i=si,j=ei;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return;
}
int main()
{
    int i,j,n,k;
    printf("\nEnter no of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d th term of array: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter number of rotations: ");
    scanf("%d",&k);
    k=k%n;
    reverse(0,n-1,arr);
    reverse(0,k-1,arr);
    reverse(k,n-1,arr);
    for(j=0;j<n;j++)
    {
        printf("\nThe %dth element of array = %d. ",j,arr[j]);
    }
    return 0;
}