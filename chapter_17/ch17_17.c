/*1. Add book information
    2.Display book information
    3. List all books of given author
     4. List the title of specified book
     5. List the count of books in the library
      6. Issue book
       7. List books in the order of accession number*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOK 100

struct book
{
    char accessionNumber[30];
    char title[50];
    char author[50];
    int price;
    char issued[4];
};

void input(struct book books[], int *numBooks);
void printing(struct book books[], int numBooks);
void printing_by_author(struct book books[], int numBooks);
void printing_by_titleofBook(struct book books[], int numBooks);
void count_books(int numBooks);
void sort_by_accessionNumber(struct book books[], int numBooks);
int compare_accessionNumber(const void *a, const void *b);

int main()
{
    int no, numBooks = 0;
    struct book books[MAX_BOOK];
    while (1)
    {
        printf("\n1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Issue book\n");
        printf("7. List books in the order of accession number\n");
        printf("8. Exit\n");
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
            // Implement function for issuing book
            printf("Functionality not implemented yet.\n");
            break;
        case 7:
            sort_by_accessionNumber(books, numBooks);
            printing(books, numBooks);
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please choose a correct option.\n");
            break;
        }
    }
    return 0;
}

void input(struct book books[], int *numBooks)
{
    if (*numBooks == MAX_BOOK)
    {
        printf("Library is full.\n");
        return;
    }
    printf("Enter the record of book no. %d\n", *numBooks + 1);
    printf("Enter the book Accession Number: ");
    scanf("%s", books[*numBooks].accessionNumber);
    printf("Enter the Title of the Book (Book Name): ");
    scanf(" %[^\n]s", books[*numBooks].title);
    printf("Enter the Author of the Book: ");
    scanf(" %[^\n]s", books[*numBooks].author);
    printf("Enter the Book Price: ");
    scanf("%d", &books[*numBooks].price);
    strcpy(books[*numBooks].issued, "No");
    (*numBooks)++;
}

void printing(struct book books[], int numBooks)
{
    for (int i = 0; i < numBooks; i++)
    {
        printf("----------------------------------\n");
        printf("Book Accession Number: %s\n", books[i].accessionNumber);
        printf("Book Name: %s\n", books[i].title);
        printf("Book Author: %s\n", books[i].author);
        printf("Book Price: %d\n", books[i].price);
        printf("Book Issued: %s\n", books[i].issued);
    }
}

void printing_by_author(struct book books[], int numBooks)
{
    char author[50];
    printf("Enter the Author Name: ");
    scanf(" %[^\n]s", author);
    for (int i = 0; i < numBooks; i++)
    {
        if (strcmp(author, books[i].author) == 0)
        {
            printf("----------------------------------\n");
            printf("Book Accession Number: %s\n", books[i].accessionNumber);
            printf("Book Name: %s\n", books[i].title);
            printf("Book Author: %s\n", books[i].author);
            printf("Book Price: %d\n", books[i].price);
        }
    }
}

void printing_by_titleofBook(struct book books[], int numBooks)
{
    char title[50];
    printf("Enter the Title of the Book: ");
    scanf(" %[^\n]s", title);
    for (int i = 0; i < numBooks; i++)
    {
        if (strcmp(title, books[i].title) == 0)
        {
            printf("----------------------------------\n");
            printf("Book Accession Number: %s\n", books[i].accessionNumber);
            printf("Book Name: %s\n", books[i].title);
            printf("Book Author: %s\n", books[i].author);
            printf("Book Price: %d\n", books[i].price);
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

int compare_accessionNumber(const void *a, const void *b)
{
    const struct book *bookA = (const struct book *)a;
    const struct book *bookB = (const struct book *)b;
    return strcmp(bookA->accessionNumber, bookB->accessionNumber);
}
