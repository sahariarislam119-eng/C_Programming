#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,i,j,k;
    printf("\nEnter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        bool flag= false;
        for(k=j+1;k<n;k++)
        {
            if(arr[j]==arr[k])
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            printf("Unique element = %d.",arr[j]);
            break;
        }
    }
    return 0;
}