#include<stdio.h>
void greet()
{
    printf("Good Morning.\n");
    printf("How are you?\n");
    return;
}
int main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        greet();
    }
    return 0;
}