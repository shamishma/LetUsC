#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int count = 0;
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (isalpha(str[i]) && strchr("aeiouAEIOU", str[i]))
        {
            if (isalpha(str[i + 1]) && strchr("aeiouAEIOU", str[i + 1]))
            {
                count++;
            }
        }
    }
    printf("Number of occurrences of any two vowels in succession: %d\n", count);
    return 0;
}
