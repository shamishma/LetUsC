#include <stdio.h>
#include <string.h>
void strc(char name[] );
int main()
{
    char str[10] = "mohan";
    strc(str);
    puts(str);
    return 0;
}
void strc(char name[])
{
    char y,a;
   y = strlen(name);
    for (a = 0; a< 10; a++)
    {
        if (name[a]>96 && name[a]<123)
        {
            name[a] = name[a]-32;
        }
    } 
}