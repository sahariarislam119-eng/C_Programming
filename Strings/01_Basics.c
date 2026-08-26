#include<stdio.h>
int main()
{
    // char arr[5]={'z','b','c','d','e'};
    char arr[]="Hello World\0";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    // printf("%d",arr[0]);
    return 0;
}