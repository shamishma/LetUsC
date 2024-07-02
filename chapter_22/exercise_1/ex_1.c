#include<stdio.h>
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        char ch;
        FILE *fp1, *fp2;
        fp1 = fopen(argv[1], "r");
        fp2 = fopen(argv[2], "w");
        while (1)
        {
            ch = fgetc(fp1);
            if (ch == EOF)
                break;
            fputc(ch, fp2);
        }
        fclose(fp1);
        fclose(fp2);
    }
    else
    {
        printf("Please enter a valid command!\n");
    }
    return 0;
}