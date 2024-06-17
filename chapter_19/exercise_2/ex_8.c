/*write a program to read the file and print a list of all blood donors
whose age s below 25 and whose blood type is 2.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct blood
{
    char name[20];
    char address[20];
    int age;
    int blood_type;
};

void add_info(struct blood data, const char *file);
void display(const char *file);
void lessthen25(const char *file);

int main()
{
    struct blood new_donor;
    char choice[3];

    while (1)
    {

        printf("Enter donor's name                    : ");
        scanf("%s", new_donor.name);
        printf("Enter donor's address                 : ");
        scanf("%s", new_donor.address);
        printf("Enter donor's age                     : ");
        scanf("%d", &new_donor.age);
        printf("Enter donor's blood type (1, 2, 3, 4) : ");
        scanf("%d", &new_donor.blood_type);

        add_info(new_donor, "Blood_donors_record.txt");

        printf("Do you want to enter more data? (yes/no): ");
        scanf("%s", choice);
        printf("------------------------------------------------\n");
        if (strcmp(choice, "no") == 0)
        {
            break;
        }
    }

    printf("\nAll Donors:\n");
    display("Blood_donors_record.txt");
    printf("\nDonors under 25 years with blood type 2:\n");
    lessthen25("Blood_donors_record.txt");

    return 0;
}

void add_info(struct blood data, const char *file)
{
    FILE *fp = fopen(file, "a");
    if (fp == NULL)
    {
        perror("Failed to open file");
        return;
    }

    fprintf(fp, "%s %s %d %d\n", data.name, data.address, data.age, data.blood_type);
    fclose(fp);
}

void display(const char *file)
{
    FILE *fp = fopen(file, "r");
    if (fp == NULL)
    {
        perror("Failed to open file");
        return;
    }

    char str[68];
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
}

void lessthen25(const char *file)
{
    FILE *fp = fopen(file, "r");
    if (fp == NULL)
    {
        perror("Failed to open file");
        return;
    }

    struct blood data;
    char str[68];
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        sscanf(str, "%19s %39s %2d %1d", data.name, data.address, &data.age, &data.blood_type);
        if (data.age < 25 && data.blood_type == 2)
        {
            printf("%s", str);
        }
    }
    fclose(fp);
}
