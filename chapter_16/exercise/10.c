/*write a program that will read a line and delete from it all occurrences of the word 'the'*/
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main()
{
    char line[MAX_LENGTH];
   printf("Enter a line of text: ");
    fgets(line, MAX_LENGTH, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    char *ptr = line;
    while ((ptr = strstr(ptr, "the")))
    {
        // Shift characters to the left to overwrite 'the'
        memmove(ptr, ptr + strlen("the"), strlen(ptr) - strlen("the") + 1);
    }

    // Print the modified line
    printf("Line after deleting 'the': %s\n", line);

    return 0;
}
