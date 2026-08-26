#include<stdio.h>
int fibo(int n)
{
    if(n==1||n==2) return 1;
    // int ans1=fibo(n-1), ans2=fibo(n-2), ans=ans1+ans2;
    // return ans;
    return fibo(n-1)+fibo(n-2);

}
int main()
{
    int n;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("%dth Fibonacci term is %d.",n,fibo(n));
    return 0;
}