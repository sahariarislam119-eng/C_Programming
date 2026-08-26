#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter number of integers required: ");
    scanf("%d",&n);
    int *ptr = (int*) malloc(n*sizeof(int));
    int *p = ptr;
    for(i=0;i<n;i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }

    int *x = p;
    for(i=0;i<n;i++)
    {
        printf("%d ",(*p));
        p++;
    }
    return 0;
}