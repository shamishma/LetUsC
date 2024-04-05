#include <stdio.h>
#define PK
int main()
{
    int a, b, sum = 0, mul = 0;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of  = ");
    scanf("%d", &b);
#ifdef KARISHMA
    sum = a + b;
    printf("The sum is %d", sum);
#endif
#ifdef PK
    sum = a - b;
    printf("The subtraction is %d", sum);
#else
    mul = a * b;
    printf("The multiplication is %d", mul);
#endif
    return 0;
}