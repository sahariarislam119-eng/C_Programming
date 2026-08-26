#include<stdio.h>
int main()
{
    int i,j,k=0,size=0;
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    for(i=0,j=size-1;i<=j;i++,j--)
    {
        char temp= str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("The reversed string is: ");
    puts(str);
    return 0;
}