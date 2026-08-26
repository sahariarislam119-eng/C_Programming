#include<stdio.h>
int main()
{
    int n;
    printf("Enter total number : ");
    scanf("%d",&n);
    if (n>=30)
    {
        printf("The student is passed");
    }
  else
  {
    printf("The student is failed");
  }  
    
    return 0;
}