/*convert into small from capital*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "mohan";
    int x, i;
    x = strlen(str);
    for (i = 0; i < x; i++)
    {
        if (str[i] == 'm')
        {
            str[i] = 'S';
        }
    }
    // str[3]=str[3]-32;
    puts(str);
    return 0;
}