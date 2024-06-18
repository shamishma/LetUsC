/* Given a text file write a program to create another text file deleting the words "a","an","the" and 
replace  each one of them with a blank space.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void remove_words(char *str);

int main() 
{
    FILE *input_file, *output_file;
    char buffer[1000];
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) 
    {
        printf("Failed to open input file.\n");
        return 1;
    }
    output_file = fopen("output.txt", "w");
    if (output_file == NULL)
     {
        printf("Failed to open output file.\n");
        fclose(input_file);
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), input_file))
     {
        remove_words(buffer);
        fputs(buffer, output_file);
    }
    fclose(input_file);
    fclose(output_file);

    printf("Processed your text in your output.txt file\n");

    return 0;
}

void remove_words(char *str) 
{
    char *words_to_remove[] = {"a", "an", "the"};
    int num_words = sizeof(words_to_remove) / sizeof(words_to_remove[0]);
    char *result = malloc(strlen(str) + 1);
    char *token, *to_free;
    
    to_free = result;
    result[0] = '\0';
    token = strtok(str, " \n");

    while (token != NULL)
    {
        int remove = 0;
        for (int i = 0; i < num_words; i++) {
            if (strcmp(token, words_to_remove[i]) == 0) 
            {
                remove = 1;
                break;
            }
        }

        if (!remove) 
        {
            strcat(result, token);
            strcat(result, " ");
        }

        token = strtok(NULL, " \n");
    }
    strcpy(str, result);
    free(to_free);
}
