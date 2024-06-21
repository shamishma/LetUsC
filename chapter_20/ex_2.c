#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char ch;
    FILE *p;
    if (argc = 2)
    {
        p = fopen(argv[1], "r");
        while (1)
        {
            ch = fgetc(p);
             if (ch == EOF)
            {
                break;
            }
            printf("%c", ch);
        }
    }
    else
    {
        printf("Write a proper command");
    }
    return 0;
}