#include<stdio.h>
int main()
{
    int i,j,n,x,flag=0,index;
    printf("\nEnter no of elements of arrat: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element in array: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d",&x);
    for(j=0;j<n;j++)
    {
        if(arr[j]==x)
        {
            index=j;
            flag=1;
            break;
        }
    }
    if(flag==1) printf("\n%d is present in array at %dth index.",x,index);
    else printf("\n%d is not present in array.",x);
    return 0;
}