/* Complex number*/
#include <stdio.h>
#include <complex.h>
int main()
{
    complex x = 3 + 2 * I;
    printf("%d\n", x);
    printf("%f\n", creal(x));
    printf("%f\n", cimag(x));
    return 0;
}