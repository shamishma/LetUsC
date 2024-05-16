#include <stdio.h>
#include <stdlib.h>
#define MAX 3
struct student
{
    int roll;
    char name[20];
    char department[20];
    char course[6];
    int year;
};
void input_students(struct student *s, int n);
void print_students(struct student *s, int n);
void print_students_by_year(struct student *s, int n);
void print_students_by_roll(struct student *s, int n);
int main()
{
    struct student *students = malloc(MAX * sizeof(struct student));
    if (students == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    int n;
    while (1)
    {
        printf("Select any option:\n");
        printf("1. Enter Student data.\n");
        printf("2. Print all student data.\n");
        printf("3. print data according year of join.\n");
        printf("4. print data according roll no.\n");
        printf("5. Exit.\n");
        printf("==> ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            input_students(students, MAX);
            break;
        case 2:
            print_students(students, MAX);
            break;
        case 3:
            print_students_by_year(students, MAX);
            break;
            case 4:
            print_students_by_roll(students, MAX);
            break;
        case 5:
        exit(1);
        }
    }

    free(students);
    return 0;
}

void input_students(struct student *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter the roll no. : ");
        scanf("%d", &(s + i)->roll);
        getchar();
        printf("Enter the name : ");
        fgets((s + i)->name, sizeof((s + i)->name), stdin);
        // gets((s+i)->name);
        printf("Enter the Department : ");
        fgets((s + i)->department, sizeof((s + i)->department), stdin);
        printf("Enter the course : ");
        fgets((s + i)->course, sizeof((s + i)->course), stdin);
        printf("Enter the year of joining : ");
        scanf("%d",&(s+i)->year);
    }
}

void print_students(struct student *s, int n)
{
    printf("Details of all students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", (s + i)->roll);
        printf("Name: %s\n", (s + i)->name);
        printf("Department: %s\n", (s + i)->department);
        printf("Course: %s\n", (s + i)->course);
        printf("Year of Joining: %d\n", (s + i)->year);
        printf("\n");
    }
}
void print_students_by_year(struct student *s, int n)
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    printf("Details of %d year joined students:\n", year);
    for (int i = 0; i < n; i++)
    {
        if ((s + i)->year == year)
        {
            printf("Student %d:\n", i + 1);
            printf("Roll No: %d\n", (s + i)->roll);
            printf("Name: %s", (s + i)->name);
            printf("Department: %s", (s + i)->department);
            printf("Course: %s", (s + i)->course);
            printf("Year of Joining: %d\n", (s + i)->year);
            printf("\n");
        }
    }
}
void print_students_by_roll(struct student *s, int n)
{

    int roll;
    printf("Enter the roll no. : ");
    scanf("%d", &roll);
    printf("Details of %d roll no. student :\n", roll);
    for (int i = 0; i < n; i++)
    {
        if ((s + i)->roll == roll)
        {
            printf("Student %d:\n", i + 1);
            printf("Roll No: %d\n", (s + i)->roll);
            printf("Name: %s", (s + i)->name);
            printf("Department: %s", (s + i)->department);
            printf("Course: %s", (s + i)->course);
            printf("Year of Joining: %d\n", (s + i)->year);
            printf("\n");
        }
    }
}