#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *p, *q;
    char str[300];
    if (argc == 3)
    {
        p = fopen(argv[1], "r");
        q = fopen(argv[2], "w");
        while (fgets(str,300,p)!=NULL)
        {
            fputs(str,q);
        }
        fclose(p);
        fclose(q);
    }
    else
    {
        printf("Please enter a valid command");
    }
    return 0;
}