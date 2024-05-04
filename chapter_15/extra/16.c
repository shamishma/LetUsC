/* compares two string*/
#include <stdio.h>
#include <string.h>
int str(char str1[], char str2[]);
int main()
{
    char str1[] = "hello";
    char str2[] = "hellen";
    int compare = str(str1, str2);
    if (compare == 0)
    {
        printf("Strings are equal.\n");
    }
    else
    {
        printf("Strings are not equal %d\n", compare);
    }
    return 0;
}

int str(char str1[], char str2[])
{
    int x = strlen(str1);
    int i;
    for (i = 0; i < x; i++)
    {
        if (str1[i] - str2[i] == 0)
        {
        }
        else
        {
            return str1[i] - str2[i];
        }
    }
    return 0;
}
