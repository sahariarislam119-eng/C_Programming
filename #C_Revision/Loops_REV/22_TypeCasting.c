#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        char ch= (char)i;
        printf("%c -> %d\n",ch,i);
    }
    return 0;
}