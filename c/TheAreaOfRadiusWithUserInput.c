#include<stdio.h>
int main(){
    float radius;
    printf("Entre radius :");
    scanf("%f",&radius);
    float pi;
    pi = 3.1415;
    float area= pi * radius * radius;
    printf("The area of circle is : %f",area);
    return 0;
}