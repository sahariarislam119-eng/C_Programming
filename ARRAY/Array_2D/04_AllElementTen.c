#include<stdio.h>
int main()
{
    int i,j;
    int arr[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j]=10;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}