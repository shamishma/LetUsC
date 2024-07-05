/* Bool and complex number*/
#include<stdio.h>
#include<stdbool.h>
#include<complex.h>
int main()
{
    bool married =true;
    bool divorced =false;
    printf("True  = %d\nFalse = %d\n",married,divorced);
    complex c=3+2*I; 
    printf("Real part      = %.2f\n",creal(c));
    printf("Imaginary part = %.2f\n",cimag(c));
    return 0;
}