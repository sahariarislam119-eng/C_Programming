#include<stdio.h>
int main()
{
    int i,j, marks[10];//={90,87,68,97,90,65,34,26,78,16};
    for(j=0;j<10;j++)
    {
        printf("\nEnter marks of %dth student: ",j);
        scanf("%d",&marks[j]);
    }
    for(i=0;i<10;i++)
    {
        if(marks[i]<35)
        printf("Roll no is %d. \n",i);
    }
    return 0;
}