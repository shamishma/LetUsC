/* Write macro definations with argument for calculation of simple interest and amount .Store these
macro definitions in a file "interest.h".Include this file in your program,and use the macro definitions
for calculating simple interest and amount. */
#include <stdio.h>
#include "interest.h"
int main()
{
    float n, r, p,a;
    printf("Enter number of years      : ");
    scanf("%f", &n);
    printf("Enter rate of interest    : ");
    scanf("%f", &r);
    printf("Enter principal of amount : ");
    scanf("%f", &p);
    a= SI(p,n,r);
    printf("Simple interest           : %.2f",a);
    return 0;
}