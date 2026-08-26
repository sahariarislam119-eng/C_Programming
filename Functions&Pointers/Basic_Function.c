#include<stdio.h>
void greet()
{
    printf("\nGood Morning.\n");
    printf("How are you ?\n");
    return;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        greet();
    }
    return 0;
} 