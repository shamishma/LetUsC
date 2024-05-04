/*sets first n character of string to a given character*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[] = "Hello, world!";
    char ch = '*';
    size_t n = 5; // Number of characters to set
    strncpy(str, "*****", n);
       if (n < strlen(str)) 
    {
        memset(str + n, ch, strlen(str) - n);
    }
    printf("Modified string: %s\n", str);
        return 0;
}
