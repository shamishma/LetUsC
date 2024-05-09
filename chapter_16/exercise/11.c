#include <stdio.h>
#include <string.h>

#define MAX_NAMES 10
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int numNames;

    // Read the number of names to store
    printf("Enter the number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &numNames);

    // Clear input buffer
    while (getchar() != '\n');

    // Read and abbreviate each name
    printf("Enter %d names:\n", numNames);
    for (int i = 0; i < numNames; i++) {
        fgets(names[i], MAX_LENGTH, stdin);

        // Abbreviate the first letter
        if (names[i][0] >= 'a' && names[i][0] <= 'z')
            names[i][0] -= 'a' - 'A';
    }

    // Print the abbreviated names
    printf("\nAbbreviated names:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s", names[i]);
    }

    return 0;
}
