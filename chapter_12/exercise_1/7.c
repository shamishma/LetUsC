/* To find arithmetic mean of two number and how to beng expanded by the preprocessor
command = gcc -E -o log.l fil*/
#include <stdio.h>
#define MEAN(a, b) ((a + b)/ 2)
int main()
{
    int a, b, m;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    m = MEAN(a,b);
    printf("Mean is %d !\n",m); 
    return 0;
}