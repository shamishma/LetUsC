/* Explain step by step evaluation of 3*x/y-z+r where x=2,y=3,z=3,r=1*/
#include <stdio.h>
int main()
{
    int x=2, y=3, z=3, r=1, a;
    a = 3 * x / y - z + r;
    // a = 3 * 2 / 3 - 3 + 1
    // a = 6 / 3 - 3 + 1
    // a = 2 - 3 + 1
    // a = -1 + 1
    // a = 0
    printf("Value of a = %d",a);
     return 0;
}