// Demo array of structures
#include <stdio.h>

struct book
{
    char title[100];
    char author[100];
    short year;
    float price;
};

int main()
{
    // Notice that we can declare an array of structures and initialize it with multiple book entries
    struct book library[3] = {
        {"Harry Potter and the Sorcerer's Stone", "J.K. Rowling", 1997, 19.99},
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99},
        {"To Kill a Mockingbird", "Harper Lee", 1960, 14.99}};

    for (int i = 0; i < 3; i++)
    {
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Year: %d\n", library[i].year);
        printf("Price: $%.2f\n\n", library[i].price);
    }
    return 0;
}