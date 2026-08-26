#include<stdio.h>
int main()
{
    char s1[]="Hello world";
    char *s2=s1;
    s1[0]='M';
    printf("%s",s2);
    return 0;
}