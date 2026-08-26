#include<stdio.h>

void greeting(int a)
{
    if (a==0) return;
    printf("Good Morning!\n");
    greeting(a-1);
    return;
}

int main()
{
    int n;
    printf("\nEnter n : ");
    scanf("%d",&n);
    greeting(n);
    return 0;
}

