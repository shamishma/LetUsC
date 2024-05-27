/*create a structure called library to hold accession number , title of the book, author name, price of the book,
and flag indicating whether book is issued or not. Write a menu_driven program that implements the working of a
library. The menu options should be:
1. Add book information
2. Display book information
3. List all books of given outhor
4. List the title of specified book
5. List the count of books in the library
6. show the books issued/not in the library
7. List the books in the order of accession number
8.Exit.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_book 100
struct book
{
    char accessionNumber[30];
    char title[20];
    char author[30];
    int price;
    char issued[5];
};
void input(struct book books[], int *numBooks);
void printing(struct book books[], int numBooks);
void printing_by_author(struct book books[], int numBooks);
void printing_by_titleofBook(struct book books[], int numBooks);
void all_issuedBook(struct book books[], int numBooks);
void count_books(int numBooks);
void sort_by_accessionNumber(struct book books[], int numBooks);
int compare_accessionNumber(const void *a, const void *b);
int main()
{
    int no, numBooks = 0;
    struct book books[MAX_book];
    while (1)
    {
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given outhor\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Issue book\n");
        printf("5.Exit :\n");
        printf("==> ");
        scanf("%d", &no);
        switch (no)
        {
        case 1:
            input(books, &numBooks);
            break;
        case 2:

            printing(books, numBooks);
            break;
        case 3:
            printing_by_author(books, numBooks);
            break;
        case 4:
            printing_by_titleofBook(books, numBooks);
            break;
        case 5:
            count_books(numBooks);
            break;
        case 6:
            all_issuedBook(books, numBooks);
            break;
        case 7:
            sort_by_accessionNumber(books, numBooks);
            printing(books, numBooks);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please choose correct option.\n");
            break;
        }
    }
    return 0;
}
void input(struct book books[], int *numBooks)
{
    printf("Enter the record of book no. %d\n", *numBooks + 1);
    getchar();
    printf("Enter the book Accsion Number : ");
    gets(books[*numBooks].accessionNumber);
    printf("Enter the Title of the Book(Book Name) : ");
    gets(books[*numBooks].title);
    printf("Enter the Author of the Book : ");
    gets(books[*numBooks].author);
    printf("Enter the Book Price : ");
    scanf("%d", &books[*numBooks].price);
    strcpy(books[*numBooks].issued, "No");
    *numBooks = *numBooks + 1;
}
void printing(struct book books[], int numBooks)
{
    for (int i = 0; i < numBooks; i++)
    {
        printf("----------------------------------\n");
        printf("Book accession Number :%s\n", books[i].accessionNumber);
        printf("Book Name             :%s\n", books[i].title);
        printf("Book Author           :%s\n", books[i].author);
        printf("Book Price            :%d\n", books[i].price);
        printf("Book issued           :%s\n", books[i].issued);
    }
}
void printing_by_author(struct book books[], int numBooks)
{
    char author[30];
    getchar();
    printf("Enter the Author Name : ");
    gets(author);
    for (int i = 0; i < numBooks; i++)
    {
        if (strcmp(author, books[i].author) == 0)
        {
            printf("----------------------------------\n");
            printf("Book accession Number :%s\n", books[i].accessionNumber);
            printf("Book Name             :%s\n", books[i].title);
            printf("Book Author           :%s\n", books[i].author);
            printf("Book Price            :%d\n", books[i].price);
        }
    }
}
void printing_by_titleofBook(struct book books[], int numBooks)
{
    char title[30];
    getchar();
    printf("Enter the Title of the Book : ");
    gets(title);
    for (int i = 0; i < numBooks; i++)
    {
        if (strcmp(title, books[i].title) == 0)
        {
            printf("----------------------------------\n");
            printf("Book accession Number :%s\n", books[i].accessionNumber);
            printf("Book Name             :%s\n", books[i].title);
            printf("Book Author           :%s\n", books[i].author);
            printf("Book Price            :%d\n", books[i].price);
        }
    }
}
void all_issuedBook(struct book books[], int numBooks)
{
    getchar();
    char str[20];
    printf("Enter the Title of the book to issue : ");
    gets(str);
    for (int i = 0; i < numBooks; i++)
    {
        if (strcmp(str, books[i].title) == 0)
        {
            strcpy(books[i].issued, "yes");
        }
    }
}
void count_books(int numBooks)
{
    printf("Total number of books in the library: %d\n", numBooks);
}
void sort_by_accessionNumber(struct book books[], int numBooks)
{
    qsort(books, numBooks, sizeof(struct book), compare_accessionNumber);
}