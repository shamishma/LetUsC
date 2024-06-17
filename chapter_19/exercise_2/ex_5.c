/* writs a program that merges lines alternately from two files and writes the result to
a new file. If one file has a smaller number of lines than the other the remaining
line from the larger file should be simply copied into the target file  */
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file1, *file2, *file3;
    char str[200];
    int n, s;
    int count1 = 0;
    int count2 = 0;

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL)
    {
        printf("Error opening file1.txt\n");
        return 1;
    }
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL)
    {
        printf("Error opening file2.txt\n");
        fclose(file1);
        return 1;
    }
    while (fgets(str, 200, file1) != NULL)
    {
        count1++;
    }
    while (fgets(str, 200, file2) != NULL)
    {
        count2++;
    }
    fclose(file1);
    fclose(file2);
    int len;
    n = count1 > count2 ? count1 : count2;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("file3.txt", "w");
    for (int i = 0; i < n; i++)
    {
        if (i < count1)
        {
            fgets(str, 200, file1);
            len = strlen(str);
            str[len - 1] = '\0';
            fputs(str, file3);
            fputs(" ", file3);
        }
        if (i < count2)
        {
            fgets(str, 200, file2);
            fputs(str, file3);
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}