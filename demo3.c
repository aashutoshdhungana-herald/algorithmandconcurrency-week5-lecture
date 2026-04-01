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
    struct book *book_ptr;
    struct book harry_potter =
        {
            "Harry Potter and the Sorcerer's Stone",
            "J.K. Rowling",
            1997,
            19.99};

    book_ptr = &harry_potter;
    // Notice -> used to access members of the structure when using pointer
    printf("Title: %s\n", book_ptr->title);
    printf("Author: %s\n", book_ptr->author);
    printf("Year: %d\n", book_ptr->year);
    printf("Price: $%.2f\n", book_ptr->price);
    return 0;
}