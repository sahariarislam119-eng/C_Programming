#include<stdio.h>
int main()
{
    char str[50];
    scanf("%[^\n]s",str);
    printf("The input is: %s",str);
    return 0;
}