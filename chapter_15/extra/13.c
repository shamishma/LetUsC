#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "King";
    char str2[5];
    // strcpy(str2,str1);
    strncpy(str2,str1,2);
    puts(str2);
    return 0;
}