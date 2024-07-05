#include<stdio.h>
#include<complex.h>
#include<stdbool.h>
int main()
{
    complex x = 4+1*I;
    complex y = 3+1*I;
    complex c = x+y;
    printf("%d\n",c);
    printf("%d\n",creal(c));
    printf("%d\n",cimag(c));
    return 0;
}