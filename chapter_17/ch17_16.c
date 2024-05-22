/* Create a structure called library to hold accession number,title of the book,author name,price of
 the book,and flag indicating whether book is issued or not,write a menu-driven program that implements
 the working of a library.the menu option should be:
 1.Add book information . 2.Display book information.*/
 #include <stdio.h>
#include <stdbool.h> 
struct Book 
{
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    bool isIssued;
};
void addBook(struct Book library[], int *numBooks) 
{
    printf("Enter book information:\n");
    printf("Accession Number: ");
    scanf("%d", &library[*numBooks].accessionNumber);
    printf("Title: ");
    scanf("%s", library[*numBooks].title);
    printf("Author: ");
    scanf("%s", library[*numBooks].author);
    printf("Price: ");
    scanf("%f", &library[*numBooks].price);
    printf("Is the book issued? (1 for yes, 0 for no): ");
    scanf("%d", &library[*numBooks].isIssued);
    
    (*numBooks)++; 
}
void displayBooks(struct Book library[], int numBooks) 
{
    printf("Book Information:\n");
    printf("Accession Number\tTitle\tAuthor\tPrice\tIssued\n");
    for (int i = 0; i < numBooks; i++) {
        printf("%d\t%s\t%s\t%.2f\t%s\n", library[i].accessionNumber, library[i].title, library[i].author, library[i].price, library[i].isIssued ? "Yes" : "No");
    }
}

int main() 
{
    struct Book library[100]; 
    int choice, numBooks = 0;

    while (1)
     {
        printf("\nMenu:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addBook(library, &numBooks);
                break;
            case 2:
                displayBooks(library, numBooks);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    
    return 0;
}
