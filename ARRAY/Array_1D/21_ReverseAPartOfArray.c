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
    int i,j,n,si,ei;
    printf("\nEnter no of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d th term of array: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\n!Enter Indexes of Array to reverse.!");
    printf("\nEnter Starting Index: ");
    scanf("%d",&si);
    printf("Enter Ending Index: ");
    scanf("%d",&ei);

    reverse(si,ei,arr);

    for(j=0;j<n;j++)
    {
        printf("\nThe %dth element of array = %d. ",j,arr[j]);
    }
    return 0;
}