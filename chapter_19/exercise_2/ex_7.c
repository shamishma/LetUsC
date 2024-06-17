/*Write a program to read these record ,arrange them in ascending order by joining date and write them to a target file.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the date structure
struct date
{
    int d, m, y;
};

// Define the employee structure
struct employee
{
    char empcode[6];
    char empname[20];
    char department[20];
    char designation[20];
    struct date join_date;
    float salary;
};

// Function declarations
void display(char *);
void add_info(char *, char *, char *, char *, struct date, float);
void sortbydoj(char *);
void swap(struct employee *, struct employee *);

int main()
{
    int n, i;
    char code[6], name[20], department[20], designation[20];
    struct date d;
    float salary;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the employee code: ");
        scanf("%s", code);
        printf("Enter the employee name: ");
        scanf("%s", name);
        printf("Enter the department: ");
        scanf("%s", department);
        printf("Enter the designation: ");
        scanf("%s", designation);
        printf("Enter join date (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &d.d, &d.m, &d.y);
        printf("Enter the salary: ");
        scanf("%f", &salary);
        add_info(code, name, department, designation, d, salary);
    }

    sortbydoj("Record.data");
    display("Record.data");

    return 0;
}

// Display function to show employee records
void display(char *file)
{
    FILE *fp;
    struct employee e;
    fp = fopen(file, "rb");
    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }
    printf("Employee Id\tName\tDepartment\tDesignation\tJoin Date\tSalary\n");
    while (fread(&e, sizeof(e), 1, fp) == 1)
    {
        printf("%-12s\t%s\t%s\t%s\t%02d/%02d/%04d\t%.2f\n", e.empcode, e.empname, e.department, e.designation, e.join_date.d, e.join_date.m, e.join_date.y, e.salary);
    }
    fclose(fp);
}

// Function to add employee information to the file
void add_info(char *code, char *name, char *department, char *designation, struct date doj, float salary)
{
    FILE *fp;
    fp = fopen("Record.data", "ab");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    struct employee e;
    strcpy(e.empcode, code);
    strcpy(e.empname, name);
    strcpy(e.department, department);
    strcpy(e.designation, designation);
    e.join_date = doj;
    e.salary = salary;
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
}

// Function to swap two employee records
void swap(struct employee *a, struct employee *b)
{
    struct employee temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort employee records by joining date
void sortbydoj(char *file)
{
    int i, j, count = 0;
    FILE *fp;
    struct employee e[100];

    fp = fopen(file, "rb");
    if (fp == NULL)
    {
        puts("Unable to open file.");
        exit(1);
    }

    while (fread(&e[count], sizeof(e[count]), 1, fp) == 1)
    {
        count++;
    }
    fclose(fp);

    for (i = 0; i < count - 1; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if ((e[i].join_date.y > e[j].join_date.y) ||
                (e[i].join_date.y == e[j].join_date.y && e[i].join_date.m > e[j].join_date.m) ||
                (e[i].join_date.y == e[j].join_date.y && e[i].join_date.m == e[j].join_date.m && e[i].join_date.d > e[j].join_date.d))
            {
                swap(&e[i], &e[j]);
            }
        }
    }

    fp = fopen(file, "wb");
    if (fp == NULL)
    {
        puts("Unable to open file for writing.");
        exit(1);
    }

    for (i = 0; i < count; i++)
    {
        fwrite(&e[i], sizeof(e[i]), 1, fp);
    }
    fclose(fp);
}
