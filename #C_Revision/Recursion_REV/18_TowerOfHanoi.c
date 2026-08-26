#include<stdio.h>
int POW(int a,int b)
{
    if(b==0) return 1;
    int x=POW(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
}
void TOH(int n, char s, char h, char d)
{
    if(n==0) return;
    TOH(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    TOH(n-1,h,s,d);
    return;
}
int main()
{
    int n,x;
    printf("\nEnter no of discks: ");
    scanf("%d",&n);
    x=POW(2,n)-1;
    printf("Minimum steps required to solve %d disks = %d.\n",n,x);
    TOH(n,'A','B','C');
    return 0;
}