#include <stdio.h>
int i, fact = 1;
#define FACT(x)            \
    for (i = 1; i <= x; i++) \
    {                       \
        fact = fact * i;    \
    }                       \
    printf("Factorial = %d", fact)
int main()
{
    int x, y;
    printf("Enter the number = ");
    scanf("%d", &x);
    FACT(x);
    getchar();
    getchar();
    return 0;
}