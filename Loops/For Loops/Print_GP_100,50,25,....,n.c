#include<stdio.h>
int main()
{
    int i,n;
    float a=100;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("The G.P till %d terms : ",n);
    for ( i=1; i<=n; i++)
    {
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}