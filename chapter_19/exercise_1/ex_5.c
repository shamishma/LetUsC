/*Read file with the help of string*/
#include <stdio.h>
int main()
{
    FILE *p;
    char str[100];
    p = fopen("file.txt", "r");
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
