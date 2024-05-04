// /*compares two strings without regard to case(identical to strcmpi)*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "hello";
    if (stricmp(str1, str2) == 0)
    {
        printf("The strings are equal (case-insensitive).\n");
    }
    else
    {
        printf("The strings are not equal (case-insensitive).\n");
    }
    return 0;
}
