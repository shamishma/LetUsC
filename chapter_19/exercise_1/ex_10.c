#include <stdio.h>
int main()
{
    FILE *p;
    struct employee
    {
        char name[30];
        int age;
        float salary;
    };
    struct employee e;
    char ch = 'y';
    p = fopen("Employee.data", "wb");
    while (ch == 'y' || ch == 'Y')
    {

        printf("Enter the name   : ");
        gets(e.name);
        printf("Enter the age    : ");
        scanf("%d", &e.age);
        printf("Enter the salary : ");
        scanf("%f", &e.salary);
        getchar();
        fwrite(&e, sizeof(e), 1, p);
        printf("Do You Want to enter more data :");
        scanf("%c", &ch);
        getchar();
    }
    fclose(p);
    p = fopen("Employee.data", "rb");
    while (fread(&e, sizeof(e), 1, p) == 1)
    {
        printf("Employee name   = %s\n", e.name);
        printf("Employee Age    = %d\n", e.age);
        printf("Employee Salary = %f\n", e.salary);
    }
    fclose(p);
    return 0;
}
