/*Duplicates a string*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
 {
    const char *original = "Hello, sweetii!";
    char *duplicate = strdup(original);
        if (duplicate != NULL) 
        {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);
        free(duplicate);
    }
     else 
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
