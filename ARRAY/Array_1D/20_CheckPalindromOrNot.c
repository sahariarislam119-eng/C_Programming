#include<stdio.h>
int palindrome(int n, int a[])
{
    int i=0, j=n-1,x=0;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            x=-1;
            break;
        }
        i++;
        j--;
    }
    return x;
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
    j=palindrome(n,arr);
    if(j==-1) printf("\nThe array is not palindrome.");
    else printf("\nThe array is palindrome.");
    return 0;
}