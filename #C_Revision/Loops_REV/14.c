#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        count++;
    }
    printf("%d",count);

    // i=n;
    // while(i!=0)
    // {
    //     i=i/10;
    //     count++;
    // }
    // printf("%d",count);

    return 0;
}