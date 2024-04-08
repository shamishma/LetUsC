#include <stdio.h>
#define LOWERCASE(c) (c + 32)
int main()
{
    char c, lc;
    printf("Enter a characters = ");
    scanf("%c", &c);
    lc = LOWERCASE(c);
    printf("Lower case id %c",lc);
    return 0;
}