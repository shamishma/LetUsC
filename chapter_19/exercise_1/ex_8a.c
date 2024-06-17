#include <stdio.h>
#include <string.h>
int write_data(FILE *p, char str[]);
int read_data(FILE *p, char str[]);
int add_data(FILE *p, char str[]);
int main()
{
    FILE *p;
    int n;
    char str[100];
    while (1)
    {
        printf("\n\nChoose option\n");
        printf("1.Write new data\n");
        printf("2.Read that data\n");
        printf("3.Add move data\n");
        printf("4.exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            getchar();
            write_data(p, str);
            break;
        case 2:
            read_data(p, str);
            break;
        case 3:
            getchar();
            add_data(p, str);
            break;
        }
    }
    return 0;
}
int write_data(FILE *p, char str[])
{
    p = fopen("New.txt", "w");
    if (p == NULL)
    {
        printf("Can not create file");
        return 0;
    }
    printf("Enter text here : ");
    while (strlen(gets(str)) > 0)
    {
        fputs(str, p);
        fputs("\n", p);
    }
    fputs("\n", p);
    fclose(p);
}
int read_data(FILE *p, char str[])
{
    p = fopen("new.txt", "r");
    if (p == NULL)
    {
        printf("Can not open file");
        return 0;
    }
    while (fgets(str, 99, p) != NULL)
    {
        printf("%s", str);
    }
    fclose(p);
}
int add_data(FILE *p, char str[])
{
    p = fopen("new.txt", "a");
    if (p == NULL)
    {
        printf("Can not open file");
        return 0;
    }
    printf("Enter text here : ");
    while (strlen(gets(str)) > 0)
    {
        fputs(str, p);
        fputs("\n", p);
    }
    fputs(" \n", p);
    fclose(p);
}