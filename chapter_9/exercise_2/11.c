#include <stdio.h>
int main()
{
    char ch = 'A';
    printf("%c", ch);
    {
        char ch = 'B';
        printf("%c", ch);
    }
    return 0;
}