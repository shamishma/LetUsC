/* Finds first occurrence of a given character in a string*/
#include <stdio.h>
#include <string.h>
int main()
{
    const char *str = "Hello, world!";
    char ch = 'l';
    char *result = strchr(str, ch);
    if (result != NULL) 
    {
        printf("'%c' found at position: %ld\n", ch, result - str);
    } else
     {
        printf("'%c' not found in the string.\n", ch);
    }
    return 0;
}
