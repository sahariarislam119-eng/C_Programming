#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number of terms n : ");
    scanf("%d",&n);
    printf("The A.P till %d terms : ",n);
    for(i=1;i<=(2*n-1);i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}