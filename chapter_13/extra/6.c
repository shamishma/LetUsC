#include <stdio.h>
int main()
{
    int a[10] = {8, 5, 10, 1, 3, 4, 12, 78, 4, 9};
    int *p, i;
    p = a;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *(p + i));
        // printf("%d\n", *p);
        // *p++;
    }
    return 0;
}
