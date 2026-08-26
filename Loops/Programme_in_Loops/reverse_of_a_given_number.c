 #include<stdio.h>
 int main()
 {
   int i,n,rev=0;
   printf("\nEnter a Number : ");
   scanf("%d",&i);
   n=i;
   while (n>0)
   {
      rev=rev*10; 
      rev=rev+(n%10);
      n=n/10;
   }
   printf("\nThe reverse of the number %d is %d.",i,rev);
   return 0;
 }