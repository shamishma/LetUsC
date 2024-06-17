/*Write a program to encrypt/decrypt a file using.
1. Offset cipher: In this cipher each character from the source file is offset
 with a fixed value nd then written to the target file*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i;
    char str[52];
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < strlen(str); i++)
        str[i] = str[i] + 128;

    fp = fopen("file6.txt", "w");
    if (fp == NULL)
    {
        perror("Failed to open file");
    }
    fprintf(fp, "%s", str);
    fclose(fp);
    fp = fopen("File6.txt", "r");
    if (fp == NULL)
    {
        perror("Failed to open file .");
    }
    fgets(str, sizeof(str), fp);
    for (i = 0; i < strlen(str); i++)
        str[i] = str[i] - 128;
    printf("Decrypted string : %s\n", str);
    fclose(fp);
    return 0;
}