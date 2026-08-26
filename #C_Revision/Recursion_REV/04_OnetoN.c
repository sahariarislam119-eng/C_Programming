#include<stdio.h>
void ONEtoN(int x,int n)
{
    if(x>n) return;
    printf("%d ",x);
    ONEtoN(x+1,n);
}
int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    ONEtoN(1,n);
    return 0;
}