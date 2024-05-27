/* Create a structure called library to hold accession number,title of the book,author name,price of
 the book,and flag indicating whether book is issued or not,write a menu-driven program that implements
 the working of a library.the menu option should be:
 1.Add book information .
 2.Display book information.
 3.List all books of given author
 4.List the title of specified book
 5.List the count in the library
 6.List the book in the order of accession number*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_BOOK 100
struct record
{
    char title[20];
    char author[20];
    float price;
    char accession[10];
    char issue;
};
void input(struct record books[], int *n);
void printAll(struct record books[], int n);
int main()
{
    struct record books[MAX_BOOK];
    int numBooks = 0, no;
    while (1)
    {
        printf("Menu ==>\n");
        printf("1.Add book information !\n");
        printf("2.Display book information.!\n");
        printf("3.List all books of given author.!\n");
        printf("4.List the title of specified book.!\n");
        printf("5.List the count in the library.!\n");
        printf("6.List the book in the order of accession number.!\n");
        printf("7.Exit!\n");
        printf("==> ");
        scanf("%d", &no);
        switch (no)
        {
        case 1:
            input(books, &numBooks);
            break;
        case 2:
            printAll(books, numBooks);
            break;

        default:
            printf("Please choose correct option!\n");
            break;
        }
    }
}
void input(struct record books[], int *n)
{
    printf("Enter the record of book %d\n", *n + 1);
    getchar();
    printf("Enter the title of the book : ");
    gets(books[*n].title);
    printf("Enter the Author of the book : ");
    gets(books[*n].author);
    printf("Enter the Accession no. of the book : ");
    gets(books[*n].accession);
    printf("Enter the price of the book : ");
    scanf("%f", &books[*n].price);
    books[*n].issue = 'N';
    *n = *n + 1;
}
void printAll(struct record books[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Book no. %d\n", i + 1);
        printf("Book name       : %s\n", books[i].title);
        printf("Author name     : %s\n", books[i].author);
        printf("Accession no.   : %s\n", books[i].accession);
        printf("Price of book   : %.2f\n", books[i].price);
        printf("Book issued     : %c\n", books[i].issue);
    }
}