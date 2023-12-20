#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 5; k >= i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}