#include <stdio.h>

struct book
{
    // Assignment inside struct to memebers is invalid
    // char title[30] = "Book Title";
    // char author[30] = "Book Author";
    // short year = 2000;
    // float price = 9.99;
    char title[100];
    char author[100];
    short year;
    float price;
};

int main()
{
    // Initialize and declare a book structure variable
    struct book harry_potter = {"Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 1997, 19.99};

    // Notice using . to access members of the structure variable
    printf("Title: %s\n", harry_potter.title);
    printf("Author: %s\n", harry_potter.author);
    printf("Year: %d\n", harry_potter.year);
    printf("Price: $%.2f\n", harry_potter.price);
    return 0;
}