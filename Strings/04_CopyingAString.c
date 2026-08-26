#include<stdio.h>
int main()
{
    int i,j,k=0,size=0;
    char s1[100];
    printf("\nEnter the string: ");
    scanf("%[^\n]s",s1);
    while(s1[k]!='\0')
    {
        size++;
        k++;
    }
    char s2[size+1];
    for(i=0;i<=size;i++)
    {
        s2[i]=s1[i];
    }
    printf("\nThe copied string is: %s",s2);
    return 0;
}