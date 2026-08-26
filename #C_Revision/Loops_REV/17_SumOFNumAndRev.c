#include<stdio.h>
int main()
{
    int a,i,num,rev=0,sum;
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
    printf("The sum of the input number %d and rev number %d is %d",i,rev,i+rev);
    return 0;
}