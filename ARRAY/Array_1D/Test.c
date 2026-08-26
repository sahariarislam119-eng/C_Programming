#include<stdio.h>

int main()
{
    int n, i, j, count;
    printf("\nEnter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count == 1)
        {
            printf("Unique element = %d", arr[i]);
            break;
        }
    }

    return 0;
}