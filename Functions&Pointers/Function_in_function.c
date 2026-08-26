#include<stdio.h>
void England()
{
    printf("I am in England.\n "); // 6
    return; // 7
}
void Australia()
{
    printf("I am in Australia.\n"); // 4
    England(); // 5
    return; // 8
}
void India()
{
    printf("I am in India.\n"); // 2
    Australia(); //3
    return; // 9
}
int main()
{
    India(); // 1
    return 0; // 10
}
 