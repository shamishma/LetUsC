/* Write a program to delete all vowels from a sentence . Assume that the sentence
 is not more than 80 character long */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    printf("Enter the string : ");
    gets(str);
    int x = strlen(str);
    for (int i = 0; i < x; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' ||str[i] == 'e' || str[i] == 'E' || 
        str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || 
        str[i] == 'u' || str[i] == 'U')
        {
            for (int j = i; j<x; j++)
            {
                str[j] = str[j + 1];
            }
            x--;
        }
    }
    puts(str);
    return 0;
}