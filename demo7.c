// Demo array of structures using pointers and malloc
#include <stdio.h>
#include <stdlib.h>
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
    struct book *library;
    int num_books = 3;

    // Allocate memory for an array of book structures
    library = (struct book *)malloc(num_books * sizeof(struct book));

    if (library == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the book entries
    strcpy(library[0].title, "Harry Potter and the Sorcerer's Stone");
    strcpy(library[0].author, "J.K. Rowling");
    library[0].year = 1997;
    library[0].price = 19.99;

    strcpy(library[1].title, "The Great Gatsby");
    strcpy(library[1].author, "F. Scott Fitzgerald");
    library[1].year = 1925;
    library[1].price = 10.99;

    strcpy(library[2].title, "To Kill a Mockingbird");
    strcpy(library[2].author, "Harper Lee");
    library[2].year = 1960;
    library[2].price = 14.99;

    // Display the book information
    for (int i = 0; i < num_books; i++)
    {
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Year: %d\n", library[i].year);
        printf("Price: $%.2f\n\n", library[i].price);
    }

    // Free the allocated memory
    free(library);

    return 0;
}