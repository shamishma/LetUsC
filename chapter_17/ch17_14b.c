/* Suppose  there is a structure called employee that holds information like employee code,name and date of
joining.write a program to creat an array of structures and some data into it.Then ask the user to enter
current date,Display the names of those employees whose tenure is greater than equal to 3 years*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_EMPLOYEES 3

struct employee
{
    int emp_code;
    char name[100]; 
    int join_year;
    int join_month;
    int join_date;
};

void input_employee(struct employee *s, int n);
void print_employee(struct employee *s, int n, int current_year, int current_month, int current_date);

int main()
{
    struct employee *employees = malloc(MAX_EMPLOYEES * sizeof(struct employee));
    if (employees == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int current_year, current_month, current_date;
    int choice;
    do
    {
        printf("Menu:\n");
        printf("1. Enter current date\n");
        printf("2. Enter employee details\n");
        printf("3. Print employees with tenure >= 3 years\n");
        printf("4. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice==>");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter current date (YYYY/MM/DD): ");
            scanf("%d/%d/%d", &current_year, &current_month, &current_date);
            break;
        case 2:
            input_employee(employees, MAX_EMPLOYEES);
            break;
        case 3:
            print_employee(employees, MAX_EMPLOYEES, current_year, current_month, current_date);
            break;
        case 4:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 4);

    free(employees);
    return 0;
}

void input_employee(struct employee *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for employee %d  :\n", i + 1);
        printf("Enter the code of employee     : ");
        scanf("%d", &(s + i)->emp_code);
        getchar(); 
        printf("Enter the name                 : ");
        fgets((s + i)->name, sizeof((s + i)->name), stdin);
        (s + i)->name[strcspn((s + i)->name, "\n")] = 0; 
        printf("Enter the joining date         : ");
        scanf("%d/%d/%d", &(s + i)->join_year,&(s+i)->join_month,&(s+i)->join_date);
    }
}

void print_employee(struct employee *s, int n, int current_year, int current_month, int current_date)
{
    printf("Employees with tenure greater than or equal to 3 years==>\n");
    for (int i = 0; i < n; i++)
    {
        int tenure_years = current_year - (s + i)->join_year;
        if (current_month < (s + i)->join_month ||
            (current_month == (s + i)->join_month && current_date < (s + i)->join_date))
        {
            tenure_years--;
        }

        if (tenure_years >= 3)
        {
            printf("Employee %d: %s\n", (s + i)->emp_code, (s + i)->name);
        }
    }
}

