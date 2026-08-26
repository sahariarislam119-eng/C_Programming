#include<stdio.h>
int main()
{
    char str[20]="College";
    puts(str);
    for(int i=6;i>=2;i--)
    {
        str[i+1]=str[i];
        if(i==2)
        {
            str[i]='l';
        }
    }
    puts(str);
    return 0;
}