#include<stdio.h>

void oneTOn(int x,int n)
{
    if(x>n) return;
    printf("%d\n",x);
    oneTOn(x+1,n);
}
 
int main()
{
    int n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    oneTOn(1,n);
    return 0;
}