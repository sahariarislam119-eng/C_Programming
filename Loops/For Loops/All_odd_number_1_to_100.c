#include<stdio.h>
int main()
{
    int i;
    printf("All odd numbers from 1 to 100 : ");
    for ( i = 1; i <= 100; i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}