#include <stdio.h>
#include <string.h>
void convert(char *str);
char cypher[52] = "ABCDEFGHIJKMNOPQRSTUVWXYZ";
char change[52] = "abjdcjfjcfjvgjvbgjjvjvgbj";
int main()
{
    FILE *p;
    char str[1000];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    p = fopen("File9.txt", "w");
    if (p == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }
    while (strlen(gets(str)) > 0)
    {
        convert(str);
        printf("%s", str);
        // fprintf(p, "%s", str);
    }
    fclose(p);
    return 0;
}
void convert(char *str)
{
    for (int i = 0; i < strlen(str); i++)

    {
        for (int j = 0; j < 52; j++)

        {
            if (str[i] == cypher[j])

            {
                str[i] = change[j];
            }
        }
    }
}