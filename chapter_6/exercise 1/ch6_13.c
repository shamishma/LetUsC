#include <stdio.h>
int main()
{
    int i, j;
    float fact, sum;
    for (i = 1; i <= 7; i++)
    {
        fact = 1.0;
        for (j = 1; j <= i; j++)
            fact = fact * j;
        sum = sum + i / fact;
    }
    printf("Sum of series =%f\n", sum);
    return 0;
}