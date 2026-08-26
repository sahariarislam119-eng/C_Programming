#include<stdio.h>
int main()
{
    int i,j,arr[4][4]={{01,67,78,90},{02,78,98,45},{03,47,76,89},{04,92,38,56}};
    printf("\n");
    printf("R Ph Ch Ma\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            // printf("\nThe element of %dth Row & %dth Column = %d. ",i,j,arr[i][j]);
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}