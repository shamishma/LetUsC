/* Write a program to copy content of one file to another. While doing so replace all
lowercase characters to their equivalent uppercase characters.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *fpInput, *fpOutput;
    char ch, source[67], destination[67];
    int count = 1;
    printf("Enter source file name       : ");
    scanf("%s", source);
    fpInput = fopen(source, "r");
    if (fpInput == NULL)
    {
        puts("Unable to open source file.");
        exit(1);
    }
    printf("Enter destination file name  : ");
    scanf("%s", destination);
    fpOutput = fopen(destination, "w");
    if (fpOutput == NULL)
    {
        puts("Unable to open destination file.");
        fclose(fpInput);
        exit(1);
    }
    printf("\n%3d: ", count);
    while ((ch = getc(fpInput)) != EOF)
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        fputc(ch, fpOutput);
        if (ch == '\n')
        {
            count++;
            printf("\n%3d: ", count);
        }
        else
        {
            printf("%c", ch);
        }
    }
    fclose(fpInput);
    fclose(fpOutput);
    printf("\n--------------------------------\n");
    printf("\nContain copied successfully!!");
    return 0;
}