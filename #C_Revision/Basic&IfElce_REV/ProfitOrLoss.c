#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if(sp>cp){printf("Profit");}
    else if(sp==cp){printf("No profit no loss.");}
    else{printf("Loss");}
    return 0;
}