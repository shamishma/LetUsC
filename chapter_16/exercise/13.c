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
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='o'||str[i]=='O'||str[i]=='i'||str[i]=='I'||str[i]=='u'||str[i]=='U')
        {
            
        }
    }
    printf("Number of occurrences of any two vowels in succession: %d\n", count);
    return 0;
}
