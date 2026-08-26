#include<stdio.h>
int main()
{
    FILE * ptr= fopen("Test.txt","w");
    // char str[]="Hello PW! \n Call me home";
    // fputs(str,ptr);
    // fclose(ptr);
    char str [100];
    while(fgets(str,100,ptr)!=NULL)
        printf("%s",str);
    return 0;
}