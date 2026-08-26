#include<stdio.h>
int maze(int n,int m) 
{
    int rightWays=0, downWays=0;
    if(n==1&&m==1) return 1;
    if(n==1)
    {
        rightWays += maze(n,m-1);
    }
    if(m==1)
    {
        downWays += maze(n-1,m);
    }
    if(n>1&&m>1)
    {
        rightWays += maze(n,m-1);
        downWays += maze(n-1,m);
    }
    return rightWays + downWays;
}
int main()
{
    int r,c;
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of column: ");
    scanf("%d",&c);
    printf("\nNuber of ways = %d.\n",maze(r,c));
    return 0;
}