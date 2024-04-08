
#include <stdio.h>
#define CONVERT(x) ((x >= 65 && x <= 90) ? (x + 32) : (x >= 97 && x <= 122) ? (x - 32) : x)
int main()
{
    char c, x;
    printf("Enter the character : ");
    scanf("%c", &c);
    x = CONVERT(c);
    printf("After Convert %c", x);
    return 0;
}