#include <stdio.h>
#define ABSOlUTE(n) ((n<0)?(n*-1):n)
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    n=ABSOlUTE(n);
    printf("Number is %d !\n", n);
    return 0;
}