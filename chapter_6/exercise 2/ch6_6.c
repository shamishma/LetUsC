#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 24; i++)
    {
        if (i == 0)
            printf("12:00 AM\n");
        if (i >= 1 && i < 12)
            printf("%d:00 AM\n", i);
        if (i > 12 && i < 24)
            printf("%d:00 PM\n", i-12);
        if (i == 12)
            printf("%d:00 PM\n", i);
    }
    return 0;
}