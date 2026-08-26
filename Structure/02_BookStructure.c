#include<stdio.h>
#include<string.h>
struct book
{
    char name[50];
    float price;
    int pages;
};
int main()
{
    struct book b1;
    strcpy(b1.name,"Seven killers");
    b1.price=499.99;
    b1.pages=232;
    printf("\nName of the book: %s",b1.name);
    printf("\nPrice of the book: %.2f",b1.price);
    printf("\nNumber of pages in the book: %d\n",b1.pages);
    return 0;
}