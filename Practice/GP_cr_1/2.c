#include<stdio.h>
int main()
{
    float i,n,a=100;
    printf("Enter number of terms : ");
    scanf("%f",&n);
    for (i=1;i<=n;i++)
    {
        printf("%f ",a);
        a=a/2;
    }
     
    return 0;
}