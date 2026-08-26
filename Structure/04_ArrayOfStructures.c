#include<stdio.h>
typedef struct pokemon
{
    char name[15];
    int hp;
    int speed;
    int attack;
    char tier;
} pokemon;

int main()
{
    int i,n;
    printf("Enter no of pokemons: ");
    scanf("%d",&n);
    pokemon arr[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Name of pokemon: ");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter hp of %dth pokemon: ",i);
        scanf("%d",&arr[i].hp);
        printf("Enter speed of %dth pokemon: ",i);
        scanf("%d",&arr[i].speed);
        printf("Enter attack of %dth pokemon: ",i);
        scanf("%d",&arr[i].attack);
        printf("Enter tier of %dth pokemon: ",i);
        scanf(" %c",&arr[i].tier);
    }

    // Printing
    for(i=0;i<n;i++)
    {
        printf("\nThe Name of pokemon: %s",arr[i].name);
        printf("\nThe hp of %dth pokemon: %d",i,arr[i].hp);
        printf("\nThe speed of %dth pokemon: %d",i,arr[i].speed);
        printf("\nThe attack of %dth pokemon: %d",i,arr[i].attack);
        printf("\nThe tier of %dth pokemon: %c",i,arr[i].tier);
        printf("\n");
    }
    return 0;
}