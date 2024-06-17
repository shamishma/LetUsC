#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p;
    struct emp
    {
        char name[50];
        int age;
        float salary;
    };
    struct emp y;
    int n;
    while (1)
    {
        printf("\nchoose the option \n");
        printf("1.Enter Fresh data    !\n");
        printf("2.Read the data     !\n");
        printf("3.Append the data   !\n");
        printf("4.Exit Program      !\n");
        printf("==> ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            getchar();
            printf("Enter the name      : ");
            gets(y.name);
            printf("Enter the age       : ");
            scanf("%d", &y.age);
            printf("Enter the salary    : ");
            scanf("%f", &y.salary);
            printf("--------------------------------\n");
            p = fopen("Employee.txt", "w");
            fprintf(p, "%s\n%d\n%f\n", y.name, y.age, y.salary);
            fclose(p);
            break;
        case 2:
            // char temp[20];
            // p = fopen("Employee.txt", "r");
            // while (fscanf(p, "%s %s\n%d\n%f", y.name, temp, &y.age, &y.salary) != EOF)
            // {
            //     strcat(y.name, " ");
            //     strcat(y.name, temp);
            //     printf("Name   : %s\n", y.name);
            //     printf("Age    : %d\n", y.age);
            //     printf("Salary : %.2f\n", y.salary);
            //     printf("=================================\n");
            // }
            // fputs("\n", p);
            // fclose(p);
            // break;

            p = fopen("Employee.txt", "r");
            if (p == NULL)
            {
                perror("Unable to open file");
                exit(1);
            }
            while (fgets(y.name, sizeof(y.name), p) != NULL)
            {
                y.name[strcspn(y.name, "\n")] = '\0'; 
                fscanf(p, "%d", &y.age);
                fscanf(p, "%f", &y.salary);
                printf("Name   : %s\n", y.name);
                printf("Age    : %d\n", y.age);
                printf("Salary : %.2f\n", y.salary);
                printf("=================================\n");
                fgetc(p); 
            }
            fclose(p);
            break;
        case 3:
            getchar();
            printf("Enter the name      : ");
            gets(y.name);
            printf("Enter the age       : ");
            scanf("%d", &y.age);
            printf("Enter the salary    : ");
            scanf("%f", &y.salary);
            printf("--------------------------------\n");
            p = fopen("Employee.txt", "a");
            fprintf(p, "%s\n%d\n%f\n", y.name, y.age, y.salary);
            fclose(p);
            break;

        case 4:
            exit(1);
            break;
        
        default:
            printf("Please select the  correct number :  ");
            break;
        }
    }
    return 0;
}