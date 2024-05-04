/*Sets all character of string to a given character */
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[] = "Hello, world!";
    char ch = '#';
     memset(str, ch, strlen(str));
    printf("Modified string: %s\n", str);
        return 0;
}
