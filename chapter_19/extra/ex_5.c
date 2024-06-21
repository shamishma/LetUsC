/*Given a list of nams of student in a class,write a program to store the names in a file on disk.
Make a provision to display the nth name in the list, where n is read from keyboard.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add_info(char*);
void display(char*);
void disbys(int, char*);

int main()
 {
    int choice, num;
    char filename[] = "Students.txt";
    char continueAdding = 'y';

    while (1) 
    {
        printf("\nMenu:\n");
        printf("1. Add student name(s)\n");
        printf("2. Display nth student name\n");
        printf("3. Display all student names\n");
        printf("4. Exit\n");
        printf("*****************************************\n");
        printf("Enter your choice ==> ");
        scanf("%d", &choice);

        switch (choice)
         {
            case 1:
                while (continueAdding == 'y' || continueAdding == 'Y') 
                {
                    add_info(filename);
                    printf("Do you want to add another name? (y/n): ");
                    scanf(" %c", &continueAdding); 
                }
                continueAdding = 'y'; 
                break;
            case 2:
                printf("Enter the position of the student name to display : ");
                scanf("%d", &num);
                printf("------------------------------------------------------\n");
                disbys(num, filename);
                break;
            case 3:
                display(filename);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void add_info(char *file)
 {
    FILE *fp = fopen(file, "a");
    if (fp == NULL)
     {
        printf("Could not open file for writing.\n");
        return;
    }

    char name[30];
    printf("Enter student name: ");
    scanf("%s", name);
    fputs(name, fp);
    fputc('\n', fp);

    fclose(fp);
}

void display(char *file)
 {
    FILE *fp = fopen(file, "r");
    char name[30];
    if (fp == NULL)
     {
        printf("File does not exist.\n");
        return;
    }
    while (fgets(name, sizeof(name), fp) != NULL)
     {
        printf("%s", name);
    }
    fclose(fp);
}

void disbys(int num, char *file) 
{
    FILE *fp = fopen(file, "r");
    int i;
    char name[30];
    if (fp == NULL)
     {
        printf("File does not exist.\n");
        return;
    }

    for (i = 1; fgets(name, sizeof(name), fp) != NULL; i++)
     {
        if (i == num) {
            switch (num)
             {
                case 1:
                    printf("%dst name is: %s", num, name);
                    break;
                case 2:
                    printf("%dnd name is: %s", num, name);
                    break;
                case 3:
                    printf("%drd name is: %s", num, name);
                    break;
                default:
                    printf("%dth name is: %s", num, name);
            }
            fclose(fp);
            return;
        }
    }
    printf("There are only %d names.\n", i - 1);
    fclose(fp);
}
