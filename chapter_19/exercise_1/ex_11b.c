/*Add the data in binary and text,append the data in binary and text, read the data in binary and text
 also modify the data in binary and text*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employees
{
    char name[50];
    int code;
    long long int mobile;
    char address[100];
    double salary;
};

void addEmployeeText(struct employees *e);
void addEmployeeBinary(struct employees *e);
void appendEmployeeText(struct employees *e);
void appendEmployeeBinary(struct employees *e);
void readEmployeeText(struct employees *e);
void readEmployeeBinary(struct employees *e);
void modifyEmployeeText(struct employees *e);
void modifyEmployeeBinary(struct employees *e);

int main()
{
    struct employees e;
    int n;
    while (1)
    {
        printf("Choose any Option.\n");
        printf("1. Add Fresh data in text\n");
        printf("2. Add Fresh data in binary\n");
        printf("3. Append More data in text\n");
        printf("4. Append More data in binary\n");
        printf("5. Read data in text\n");
        printf("6. Read  data in binary\n");
        printf("7. Modify data in text\n");
        printf("8. Modify  data in binary\n");
        printf("9. Exit\n");
        printf("==>");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            addEmployeeText(&e);
            break;
        case 2:
            addEmployeeBinary(&e);
            break;
        case 3:
            appendEmployeeText(&e);
            break;
        case 4:
            readEmployeeText(&e);
            break;
        case 5:
            readEmployeeBinary(&e);
            break;
        case 6:
            appendEmployeeBinary(&e);
            break;
        case 7:
            modifyEmployeeText(&e);
            break;
        case 8:
            modifyEmployeeText(&e);
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}

void addEmployeeText(struct employees *e)
{
    FILE *p = fopen("Employee.txt", "w");
    if (p == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    getchar();
    printf("Enter the name            : ");
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';
    printf("Enter the code            : ");
    scanf("%d", &e->code);
    printf("Enter the mobile number   : ");
    scanf("%lld", &e->mobile);
    getchar();
    printf("Enter the address         : ");
    fgets(e->address, sizeof(e->address), stdin);
    e->address[strcspn(e->address, "\n")] = '\0';
    printf("Enter the salary          : ");
    scanf("%lf", &e->salary);
    printf("---------------------------------\n");
    fprintf(p, "%s\n%d\n%lld\n%s\n%.2lf\n", e->name, e->code, e->mobile, e->address, e->salary);
    fclose(p);
}

void addEmployeeBinary(struct employees *e)
{
    FILE *p = fopen("Employee.dat", "wb");
    if (p == NULL)

    {
        printf("Error opening file!\n");
        return;
    }
    getchar();
    printf("Enter the name            : ");
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';
    printf("Enter the code            : ");
    scanf("%d", &e->code);
    printf("Enter the mobile number   : ");
    scanf("%lld", &e->mobile);
    getchar();
    printf("Enter the address         : ");
    fgets(e->address, sizeof(e->address), stdin);
    e->address[strcspn(e->address, "\n")] = '\0';
    printf("Enter the salary          : ");
    scanf("%lf", &e->salary);
    printf("---------------------------------\n");
    fwrite(e, sizeof(struct employees), 1, p);
    fclose(p);
}

void appendEmployeeText(struct employees *e)
{
    FILE *p = fopen("Employee.txt", "a");
    if (p == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    getchar();
    printf("Enter the name            : ");
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';
    printf("Enter the code            : ");
    scanf("%d", &e->code);
    printf("Enter the mobile number   : ");
    scanf("%lld", &e->mobile);
    getchar();
    printf("Enter the address         : ");
    fgets(e->address, sizeof(e->address), stdin);
    e->address[strcspn(e->address, "\n")] = '\0';
    printf("Enter the salary          : ");
    scanf("%lf", &e->salary);
    printf("---------------------------------\n");
    fprintf(p, "%s\n%d\n%lld\n%s\n%.2lf\n", e->name, e->code, e->mobile, e->address, e->salary);
    fclose(p);
}
void readEmployeeText(struct employees *e)
{
    FILE *p = fopen("Employee.txt", "r");
    if (p == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    while (fgets(e->name, sizeof(e->name), p) != NULL)
    {
        fscanf(p, "%d\n", &e->code);
        fscanf(p, "%lld\n", &e->mobile);
        fscanf(p, "%s\n", &e->address);
        fscanf(p, "%lf\n", &e->salary);
        printf("Name    : %s", e->name);
        printf("Code    : %d\n", e->code);
        printf("Mobile  : %lld\n", e->mobile);
        printf("Address : %s\n", e->address);
        printf("Salary  : %.2lf\n", e->salary);

        printf("---------------------------------\n");
    }
    fclose(p);
}
void readEmployeeBinary(struct employees *e)
{
    FILE *p = fopen("Employee.dat", "rb");
    if (p == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    while (fread(e, sizeof(*e), 1, p) == 1)
    {
        printf("Name    : %s\n", e->name);
        printf("Code    : %d\n", e->code);
        printf("Mobile  : %lld\n", e->mobile);
        printf("Address : %s\n", e->address);
        printf("Salary  : %.2lf\n", e->salary);
        printf("---------------------------------\n");
    }
    fclose(p);
}
void appendEmployeeBinary(struct employees *e)
{
    FILE *p = fopen("Employee.dat", "ab");
    if (p == NULL)

    {
        printf("Error opening file!\n");
        return;
    }
    getchar();
    printf("Enter the name            : ");
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';
    printf("Enter the code            : ");
    scanf("%d", &e->code);
    printf("Enter the mobile number   : ");
    scanf("%lld", &e->mobile);
    getchar();
    printf("Enter the address         : ");
    fgets(e->address, sizeof(e->address), stdin);
    e->address[strcspn(e->address, "\n")] = '\0';
    printf("Enter the salary          : ");
    scanf("%lf", &e->salary);
    printf("---------------------------------\n");
    fwrite(e, sizeof(struct employees), 1, p);
    fclose(p);
}
void modifyEmployeeText(struct employees *e)
{
    FILE *p = fopen("Employee.txt", "r");
    FILE *temp = fopen("TempEmployee.txt", "w");
    if (p == NULL || temp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    int code;
    int found = 0;

    printf("Enter the employee code to modify: ");
    scanf("%d", &code);

    while (fgets(e->name, sizeof(e->name), p) != NULL)
    {
        fscanf(p, "%d\n", &e->code);
        fscanf(p, "%lld\n", &e->mobile);
        fgets(e->address, sizeof(e->address), p);
        fscanf(p, "%lf\n", &e->salary);

        if (e->code == code)
        {
            found = 1;
            printf("Enter the new name            : ");
            getchar();
            fgets(e->name, sizeof(e->name), stdin);
            e->name[strcspn(e->name, "\n")] = '\0';
            printf("Enter the new mobile number   : ");
            scanf("%lld", &e->mobile);
            getchar();
            printf("Enter the new address         : ");
            fgets(e->address, sizeof(e->address), stdin);
            e->address[strcspn(e->address, "\n")] = '\0';
            printf("Enter the new salary          : ");
            scanf("%lf", &e->salary);
            printf("---------------------------------\n");
        }

        fprintf(temp, "%s\n%d\n%lld\n%s\n%.2lf\n", e->name, e->code, e->mobile, e->address, e->salary);
    }

    fclose(p);
    fclose(temp);

    if (found)
    {
        remove("Employee.txt");
        rename("TempEmployee.txt", "Employee.txt");
        printf("Employee data modified successfully.\n");
    }
    else
    {
        remove("TempEmployee.txt");
        printf("Employee with code %d not found.\n", code);
    }
}
void modifyEmployeeBinary(struct employees *e)
{
    FILE *p = fopen("Employee.dat", "rb+");
    if (p == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    int code;
    int found = 0;
    long pos;

    printf("Enter the employee code to modify: ");
    scanf("%d", &code);

    while (fread(e, sizeof(struct employees), 1, p) == 1)
    {
        if (e->code == code)
        {
            found = 1;
            printf("Enter the new name            : ");
            getchar();
            fgets(e->name, sizeof(e->name), stdin);
            e->name[strcspn(e->name, "\n")] = '\0';
            printf("Enter the new mobile number   : ");
            scanf("%lld", &e->mobile);
            getchar();
            printf("Enter the new address         : ");
            fgets(e->address, sizeof(e->address), stdin);
            e->address[strcspn(e->address, "\n")] = '\0';
            printf("Enter the new salary          : ");
            scanf("%lf", &e->salary);
            printf("---------------------------------\n");
            fseek(p, -sizeof(struct employees), SEEK_CUR);
            fwrite(e, sizeof(struct employees), 1, p);
            break;
        }
    }

    fclose(p);

    if (found)
    {
        printf("Employee data modified successfully.\n");
    }
    else
    {
        printf("Employee with code %d not found.\n", code);
    }
}
