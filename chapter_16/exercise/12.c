#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000];
    int count = 0;

    // Read a line of text from the user
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    // Iterate over the line to find successive vowels
    for (int i = 0; i < strlen(line) - 1; i++) {
        // Check if the current character is a vowel
        if (isalpha(line[i]) && strchr("aeiouAEIOU", line[i])) {
            // Check if the next character is also a vowel
            if (isalpha(line[i+1]) && strchr("aeiouAEIOU", line[i+1])) {
                count++; // Increment count if two vowels in succession are found
            }
        }
    }

    // Print the count of occurrences
    printf("Number of occurrences of any two vowels in succession: %d\n", count);

    return 0;
}
