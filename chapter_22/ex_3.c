/*Typecasting*/
#include <stdio.h>
int main()
{
    float a, b;
    int x = 6, y = 4;
    a = x / y;
    printf("Value of a = %f\n", a);
    b = (float)x / y;
    printf("Value of b = %f\n", b);
    return 0;
}