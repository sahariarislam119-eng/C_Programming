#include<stdio.h>
int main()
{
    int a,i,num,rev=0;
    printf("\nEnter number: ");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    printf("The reverse of the number %d is %d.",i,rev);
    return 0;
}