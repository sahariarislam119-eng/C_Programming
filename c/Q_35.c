#include<stdio.h>
int main()
{
    int i,prime,num,sum=0,start,end;
    printf("Enter the start of the range : ");
    scanf("%d",&start);
    printf("Enter the end of the range : ");
    scanf("%d",&end);
    for(num=start;num<=end;num++)
    {
        prime=1;
        if(num<2)
        {
            prime=0;
        }
        else
        {
            for(i=2;i*i<=num;i++)
            {
                if(num%i==0)
                {
                    prime=0;
                    break;
                }
            }
        }
        if(prime)
        {
           sum+=num; 
        }
    }
    printf("%d %d %d",start,end,sum);
    return 0;
}