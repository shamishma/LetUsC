/*appends*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Dolly ";
    char str2[20] = "Rana";
    strncat(str1,str2,1);
    // strcat(str1,str2);
    puts(str1);
    return 0;
}