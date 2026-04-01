// typedef of a structure
#include <stdio.h>

// Notice use of typedef we create a new type called book
typedef struct
{
    char title[100];
    char author[100];
    short year;
    float price;
} book;

int main()
{
    book harry_potter = {"Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 1997, 19.99};

    printf("Title: %s\n", harry_potter.title);
    printf("Author: %s\n", harry_potter.author);
    printf("Year: %d\n", harry_potter.year);
    printf("Price: $%.2f\n", harry_potter.price);
    return 0;
}