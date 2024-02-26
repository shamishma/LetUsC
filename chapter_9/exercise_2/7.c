#include <stdio.h>
void shift(int *x, int *y, int *z);
int main()
{
    int x = 5, y = 8, z = 10;
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    shift(&x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
void shift(int *x, int *y, int *z)
{
    int t;
    t = *x;
    *x = *z;
    *z = *y;
    *y = t;
}