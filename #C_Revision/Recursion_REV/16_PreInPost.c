#include<stdio.h>
void PreInPost(int n)
{
    if(n==0) return;
    printf("\nPre  %d.",n);
    PreInPost(n-1);
    printf("\nIn   %d.",n);
    PreInPost(n-1);
    printf("\nPost %d.",n);
    return;
}
int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    PreInPost(n);
    return 0;
}