#include<stdio.h>
void ARR(int a[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return;
}
int main()
{
    int arr[5]={2,3,5,7,3};
    ARR(arr);
    return 0;
}