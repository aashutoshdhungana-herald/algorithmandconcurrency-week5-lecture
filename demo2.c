#include <stdio.h>
#include <string.h>
struct book
{
    char title[100];
    char author[100];
    short year;
    float price;
};

int main()
{
    // Initialize and declare a book structure variable
    struct book harry_potter;
    // Invalid syntax fro string assignment
    // harry_potter.title = "Harry Potter and the Sorcerer's Stone";
    strcpy(harry_potter.title, "Harry Potter and the Sorcerer's Stone");
    strcpy(harry_potter.author, "J.K. Rowling");
    harry_potter.year = 1997;
    harry_potter.price = 19.99;
    printf("Title: %s\n", harry_potter.title);
    printf("Author: %s\n", harry_potter.author);
    printf("Year: %d\n", harry_potter.year);
    printf("Price: $%.2f\n", harry_potter.price);
    return 0;
}