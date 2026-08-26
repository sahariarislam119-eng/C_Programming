#include<stdio.h>
void NtoONE(int n)
{
    if(n==0) return;
    printf("%d ",n);
    NtoONE(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    NtoONE(n);
    return 0;
}