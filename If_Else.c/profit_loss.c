#include<stdio.h>
int main()
{
    int cp;  // cp = cost price
    printf("Enter cost price : ");
    scanf("%d",&cp);
    int sp;  // sp = selling price
    printf("Enter selling price : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("No Profit, No Loss");
    }
    return 0;
}