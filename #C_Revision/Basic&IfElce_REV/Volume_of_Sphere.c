#include<stdio.h>
int main()
{
    int r;
    float v,pi=3.14;
    printf("Enter radious: ");
    scanf("%d",&r);
    v= (4.0/3.0)*pi*r*r*r;
    printf("The volume is: %f",v);
    return 0;
}