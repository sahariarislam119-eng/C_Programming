#include<stdio.h>
int main(){
float p;
printf("Enter the Principle :");
scanf("%f",&p);
float r;
printf("Enter the Rate :");
scanf("%f",&r);
float t;
printf("Enter the Time :");
scanf("%f",&t);
float si;
si = (p*r*t)/100;
printf("Simple Interst is :%f",si);
return 0;
}