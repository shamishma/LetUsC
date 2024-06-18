// /* Substitution  cipher: in this cipher for each character read from the source file a corresponding 
// predetermined charater is written to the target file.*/
#include <stdio.h>
#include <string.h>

void convert(char *str);
void reverse_convert(char *str);

char cypher[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char change[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

int main()
 {
    FILE *p;
    char str[1000];
    printf("Enter the string: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  
    convert(str);
    p = fopen("File9.txt", "w");
    if (p == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    fprintf(p, "%s\n", str);
    fclose(p);
    p = fopen("File9.txt", "r");
    if (p == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    fgets(str, sizeof(str), p);
    fclose(p);
    printf("Encrypted string: %s\n", str);
    reverse_convert(str);
    printf("original string: %s\n", str);

    return 0;
}

void convert(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < 52; j++) {
            if (str[i] == cypher[j]) {
                str[i] = change[j];
                break;
            }
        }
    }
}

void reverse_convert(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < 52; j++) {
            if (str[i] == change[j]) {
                str[i] = cypher[j];
                break;
            }
        }
    }
}
