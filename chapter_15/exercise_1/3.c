/* generate fibonacci words of order 0 through 5*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char lastbtoneterm[50] = "A";
    char lastterm[50] = "B";
    int i;
    for (i = 0; i < 5; i++)
    {
        strcpy(str, lastterm);
        strcat(str, lastbtoneterm);
        printf("%s\n", str);
        strcpy(lastbtoneterm, lastterm);
        strcpy(lastterm, str);
    }

    return 0;
}