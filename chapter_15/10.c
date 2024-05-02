#include <stdio.h>
#include <string.h>
void str( );
int main()
{
    char str[] = "mohan";
    int x, i;
     puts(str);
    return 0;
}
void str(name)
{
    char y,a;
   y = strlen(str);
    for (a = 0; a< y; a++)
    {
        if (name[a]>96 && name[a]<123)
        {
            name[a] = name[a]-32;
        }
    } 
}