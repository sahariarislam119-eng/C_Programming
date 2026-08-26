#include<stdio.h>
int main() //1
{
    void India();
    India(); //2
    return 0; //11
}
void India()
{
    printf("I am in India.\n"); //3
    void Australia();
    Australia(); //4
    return; //10
}
void Australia()
{
    printf("I am in Australia.\n"); //5
    void England();
    England(); //6
    return; //9
}
void England()
{
    printf("I am in England.\n"); //7
    return; //8
}