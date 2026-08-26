#include<stdio.h>
int main()
{
   int L;
   printf("Enter Length : ");
   scanf("%d",&L);
   int B;
   printf("Enter Breadth : ");
   scanf("%d",&B); 
   int A=L*B;
   int P=2*(L+B);
   if (A>P)
   {
    printf("The area is grater than the parimeter");
   }
  else
   {
    printf("The parimeter is grater than the area");
   }
  
   return 0;
}